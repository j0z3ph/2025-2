#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "edlib.h"

void agregar(Lista **lista, int valor)
{
    if ((*lista)->head == NULL)
    {
        (*lista)->head = (Nodo *)malloc(sizeof(Nodo));
        (*lista)->head->valor = valor;
        (*lista)->head->siguiente = NULL;
    }
    else
    {
        // Buscamos el final
        Nodo *ptr = (*lista)->head;
        while (ptr->siguiente != NULL)
        {
            ptr = ptr->siguiente;
        }
        ptr->siguiente = (Nodo *)malloc(sizeof(Nodo));
        ptr->siguiente->valor = valor;
        ptr->siguiente->siguiente = NULL;
    }
}

void recorre(Lista **lista)
{
    if ((*lista)->head == NULL)
    {
        printf("\nLista vacia :c\n");
    }
    else
    {
        Nodo *ptr = (*lista)->head;
        while (ptr != NULL)
        {
            printf("Valor: %i\n", ptr->valor);
            ptr = ptr->siguiente;
        }
    }
}

int buscar(Lista **lista, int valorABuscar)
{
    int idx = -1;
    Nodo *ptr = (*lista)->head;
    while (ptr != NULL)
    {
        idx++;
        if (ptr->valor == valorABuscar)
        {
            return idx;
        }
        ptr = ptr->siguiente;
    }
    return -1;
}

void eliminar(Lista **lista)
{
    Nodo *ptr = (*lista)->head;
    if (ptr != NULL)
    {
        if ((*lista)->head->siguiente == NULL)
        {
            free((*lista)->head);
            (*lista)->head = NULL;
        }
        else
        {
            while (ptr->siguiente->siguiente != NULL)
            {
                ptr = ptr->siguiente;
            }
            free(ptr->siguiente);
            ptr->siguiente = NULL;
        }
    }
}

Lista *nuevaLista()
{
    Lista *ptr = (Lista *)malloc(sizeof(Lista));
    ptr->agregar = agregar;
    ptr->buscar = buscar;
    ptr->eliminar = eliminar;
    ptr->recorre = recorre;
    return ptr;
}

