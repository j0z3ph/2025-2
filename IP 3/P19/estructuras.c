/**
 * @file estructuras.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer estructura :>
 * @version 0.1
 * @date 2025-06-02
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
    char telefono[15];
    char correo[50];
    Fecha fNacimiento;
} Contacto;

typedef struct ListaContacto
{
    Contacto *lista;
    size_t tamanio;
    void (*agregar)(struct ListaContacto **self, Contacto contacto);
    void (*eliminar)(struct ListaContacto **self);
    void (*listar)(struct ListaContacto **self);
} ListaContacto;

void agregarContacto(ListaContacto **lista, Contacto contacto);
void eliminaContacto(ListaContacto **lista);
void listarContactos(ListaContacto **lista);

void imprimeContacto(Contacto *contacto)
{
    printf("Nombre: %s\n", contacto->nombre);
    printf("Telefono: %s\n", contacto->telefono);
    printf("Correo Electronico: %s\n", contacto->correo);
    printf("Fecha de Nacimiento: %02i/%02i/%04i\n", contacto->fNacimiento.dia,
           contacto->fNacimiento.mes, contacto->fNacimiento.anio);
}

ListaContacto *crearNuevaLista()
{
    ListaContacto *lista = NULL;

    lista = malloc(sizeof(ListaContacto));
    lista->lista = NULL;
    lista->tamanio = 0;
    lista->agregar = agregarContacto;
    lista->eliminar = eliminaContacto;
    lista->listar = listarContactos;
    return lista;
}

void agregarContacto(ListaContacto **lista, Contacto contacto)
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

void quitaEnters(char *cadena)
{
    cadena[strlen(cadena) - 1] = '\0';
}

void eliminaContacto(ListaContacto **lista)
{
    if ((*lista)->lista != NULL)
    {
        char *menuCont[(*lista)->tamanio];
        for (size_t i = 0; i < (*lista)->tamanio; i++)
        {
            menuCont[i] = malloc(sizeof(char) * 200);
            sprintf(menuCont[i], "%s - %s", (*lista)->lista[i].nombre, (*lista)->lista[i].telefono);
        }
        int idContacto = showMenu((*lista)->tamanio, menuCont, "Seleccione el contacto a eliminar");

        if ((*lista)->tamanio == 1)
        {
            free((*lista)->lista);
            (*lista)->lista = NULL;
            (*lista)->tamanio = 0;
        }
        else
        {
            memcpy((*lista)->lista + idContacto, (*lista)->lista + idContacto + 1, sizeof(Contacto) * ((*lista)->tamanio - (idContacto + 1)));
            (*lista)->lista = realloc((*lista)->lista, (*lista)->tamanio - 1);
            (*lista)->tamanio--;
        }
        for (size_t i = 0; i < (*lista)->tamanio; i++)
        {
            free(menuCont[i]);
        }
    }
}

void listarContactos(ListaContacto **lista)
{
    for (size_t i = 0; i < (*lista)->tamanio; i++)
    {
        imprimeContacto(&((*lista)->lista[i]));
    }
}

int main()
{
    char *menu[] = {"Agregar", "Listar", "Eliminar", "Salir"};
    Contacto tmp;
    int opcion = 0;
    ListaContacto *lista = crearNuevaLista();

    while (opcion != 3)
    {
        opcion = showMenu(4, menu, "Agenda de Contactos");

        switch (opcion)
        {
        case 0:
            printf("Escriba el nombre: ");
            fgets(tmp.nombre, 100, stdin);
            quitaEnters(tmp.nombre);
            printf("Escriba el correo: ");
            fgets(tmp.correo, 50, stdin);
            quitaEnters(tmp.correo);
            printf("Escriba el telefono: ");
            fgets(tmp.telefono, 15, stdin);
            quitaEnters(tmp.telefono);
            printf("Escriba la fecha de nacimiento [dd/mm/aaaa]: ");
            scanf("%i/%i/%i", &tmp.fNacimiento.dia, &tmp.fNacimiento.mes, &tmp.fNacimiento.anio);

            lista->agregar(&lista, tmp);
            break;
        case 1:
            lista->listar(&lista);
            break;
        case 2:
            lista->eliminar(&lista);
            break;
        default:
            break;
        }

        pausa();
    }

    return 0;
}
