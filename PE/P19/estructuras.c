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
    char numero[15];
    char correo[50];
    Fecha fNacimineto;
} Contacto;

typedef struct ListaContactos
{
    Contacto *lista;
    size_t tamanio;
} ListaContactos;


ListaContactos *creaNuevaLista() {
    ListaContactos *lista;
    lista = malloc(sizeof(ListaContactos));
    lista->lista = NULL;
    lista->tamanio = 0;

    return lista;
}

typedef int entero;

void imprimeContacto(Contacto *contacto)
{
    printf("Nombre: %s\n", contacto->nombre);
    printf("Fecha de Nacimiento: %02i-%02i-%04i\n", contacto->fNacimineto.dia,
           contacto->fNacimineto.mes, contacto->fNacimineto.anio);
    printf("Correo: %s\n", contacto->correo);
    printf("Telefono: %s\n", contacto->numero);
}

void agregarContacto(ListaContactos **lista, Contacto contacto) {
    if ((*lista)->lista == NULL) {
        (*lista)->lista = malloc(sizeof(Contacto));
        strcpy((*lista)->lista->nombre, contacto.nombre);
        strcpy((*lista)->lista->correo, contacto.correo);
        strcpy((*lista)->lista->numero, contacto.numero);
        (*lista)->lista->fNacimineto = contacto.fNacimineto;
        (*lista)->tamanio = 1;
    } else {
        (*lista)->lista = realloc((*lista)->lista, ((*lista)->tamanio + 1)*sizeof(Contacto));
        strcpy((*lista)->lista[((*lista)->tamanio + 1)].nombre, contacto.nombre);
        strcpy((*lista)->lista[((*lista)->tamanio + 1)].correo, contacto.correo);
        strcpy((*lista)->lista[((*lista)->tamanio + 1)].numero, contacto.numero);
        (*lista)->lista[((*lista)->tamanio + 1)].fNacimineto = contacto.fNacimineto;
        (*lista)->tamanio++;
    }
}

int main()
{
    char *menu[] = {"Agregar", "Listar", "Eliminar", "Salir"};
    int var = showMenu(4, menu, "Agenda de Contactos");
    Contacto tmp;

    ListaContactos *lista = creaNuevaLista();

    switch (var)
    {
    case 0:
        // Agregar
        printf("Escriba el nombre: ");
        fgets(tmp.nombre, 100, stdin);
        printf("Escriba el correo: ");
        fgets(tmp.correo, 50, stdin);
        printf("Escriba el numero: ");
        fgets(tmp.numero, 15, stdin);
        printf("Escriba la fecha de nacimiento [dd/mm/aaaa]: ");
        scanf("%i/%i/%i", tmp.fNacimineto.dia, tmp.fNacimineto.mes, tmp.fNacimineto.anio);
        agregarContacto(&lista, tmp);
        
        break;
    case 1:
        for (size_t i = 0; i < lista->tamanio; i++)
        {
            imprimeContacto(&(lista->lista[i]));
        }
        
        break;
    case 2:
        // Eliminar
        break;
    case 3:
        // Salir
        break;

    default:
        break;
    }

    return 0;
}
