/**
 * @file estructuras.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer estructura
 * @version 0.1
 * @date 2025-06-03
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tools.h"

typedef struct Fecha
{
    int dia;
    int mes;
    int anio;
} Fecha;

typedef struct Contacto
{
    char nombre[100];
    char correo[50];
    char telefono[20];
    Fecha fNacimiento;
} Contacto;

typedef struct ListaContactos
{
    Contacto *lista;
    size_t tamanio;
    void (*agregar)(struct ListaContactos **self, Contacto contacto);
    void (*eliminar)(struct ListaContactos **self);
    void (*listar)(struct ListaContactos **lista);
} ListaContactos;


void agregarContacto(ListaContactos **lista, Contacto contacto);
void eliminarContacto(ListaContactos **lista);
void listarContactos(ListaContactos **lista);

ListaContactos *creaNuevaLista()
{
    ListaContactos *l = malloc(sizeof(ListaContactos));
    l->lista = NULL;
    l->tamanio = 0;
    l->agregar = agregarContacto;
    l->eliminar = eliminarContacto;
    l->listar = listarContactos;
    return l;
}

typedef int entero;

void imprimeContacto(Contacto *c)
{
    printf("Nombre: %s\n", c->nombre);
    printf("Correo: %s\n", c->correo);
    printf("Telefono: %s\n", c->telefono);
    printf("Fecha de nacimiento: %02i-%02i-%04i\n",
           c->fNacimiento.dia, c->fNacimiento.mes,
           c->fNacimiento.anio);
}

void agregarContacto(ListaContactos **lista, Contacto contacto)
{

    if ((*lista)->lista == NULL)
    {
        (*lista)->lista = malloc(sizeof(Contacto));
        *((*lista)->lista) = contacto;
        (*lista)->tamanio = 1;
    }
    else
    {
        (*lista)->lista = realloc((*lista)->lista, sizeof(Contacto) * ((*lista)->tamanio + 1));
        *((*lista)->lista + (*lista)->tamanio) = contacto;
        (*lista)->tamanio++;
    }
}

void eliminarContacto(ListaContactos **lista)
{
    if ((*lista)->lista != NULL)
    {
        char *lcontacto[(*lista)->tamanio];
        for (size_t i = 0; i < (*lista)->tamanio; i++)
        {
            lcontacto[i] = malloc(sizeof(char) * 200);
            sprintf(lcontacto[i], "%s (%s)", (*lista)->lista[i].nombre, (*lista)->lista[i].correo);
        }

        int idEliminar = showMenu((*lista)->tamanio, lcontacto, "Seleccione el contacto a eliminar");

        if ((*lista)->tamanio == 1)
        {
            free((*lista)->lista);
            (*lista)->lista = NULL;
            (*lista)->tamanio = 0;
        }
        else
        {
            memcpy((*lista)->lista + idEliminar, (*lista)->lista + idEliminar + 1,
                   ((*lista)->tamanio - idEliminar - 1) * sizeof(Contacto));
            (*lista)->lista = realloc((*lista)->lista, ((*lista)->tamanio - 1) * sizeof(Contacto));
            (*lista)->tamanio--;
        }

        for (size_t i = 0; i < (*lista)->tamanio; i++)
        {
            free(lcontacto[i]);
        }
    }
}

void listarContactos(ListaContactos **lista)
{
    for (size_t i = 0; i < (*lista)->tamanio; i++)
    {
        imprimeContacto(&(*lista)->lista[i]);
        printf("\n");
    }
}

void quitaEnters(char *cadena)
{
    cadena[strlen(cadena) - 1] = '\0';
}

int main()
{
    char *menu[] = {"Agregar", "Eliminar", "Listar", "Salir"};
    ListaContactos *lista = creaNuevaLista();
    Contacto tmp;
    int valor = 0;

    while (valor != 3)
    {
        valor = showMenu(4, menu, "Agenda de Exes");

        switch (valor)
        {
        case 0:
            printf("Ingrese nombre: ");
            fgets(tmp.nombre, 100, stdin);
            quitaEnters(tmp.nombre);
            printf("Ingrese correo: ");
            fgets(tmp.correo, 50, stdin);
            quitaEnters(tmp.correo);
            printf("Ingrese telefono: ");
            fgets(tmp.telefono, 20, stdin);
            quitaEnters(tmp.telefono);
            printf("Ingrese cumpleanios [dd/mm/aaaa]: ");
            scanf("%i/%i/%i", &tmp.fNacimiento.dia,
                  &tmp.fNacimiento.mes,
                  &tmp.fNacimiento.anio);

            lista->agregar(&lista, tmp);
            break;
        case 1:
            lista->eliminar(&lista);
            break;
        case 2:
            lista->listar(&lista);
            break;
        default:
            break;
        }

        pausa();
    }

    /*Contacto *c = malloc(sizeof(Contacto));

    c->fNacimiento.dia = 30;
    c->fNacimiento.mes = 3;
    c->fNacimiento.anio = 2005;

    strcpy(c->nombre, "Valeria");
    strcpy(c->correo, "vale.rcl@yahoo.ipn.mx");
    strcpy(c->telefono, "666-999");*/

    // imprimeContacto(c);

    return 0;
}
