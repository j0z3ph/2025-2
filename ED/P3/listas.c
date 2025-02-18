/**
 * @file listas.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-02-14
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Nodo
{
    int valor;
    struct Nodo *siguiente;
} Nodo;

typedef struct Lista
{
    Nodo *head;
    void (*agregar)(Lista *self, int valor);
    void (*recorre)(Nodo *lista);
    int (*buscar)(Nodo *lista, int valorABuscar);
    void (*eliminar)(Nodo **lista);
} Lista;

void agregar(Lista *lista, int valor)
{
    if (lista->head == NULL)
    {
        lista->head = (Nodo *)malloc(sizeof(Nodo));
        lista->head->valor = valor;
        lista->head->siguiente = NULL;
    }
    else
    {
        // Buscamos el final
        Nodo *ptr = lista->head;
        while (ptr->siguiente != NULL)
        {
            ptr = ptr->siguiente;
        }
        ptr->siguiente = (Nodo *)malloc(sizeof(Nodo));
        ptr->siguiente->valor = valor;
        ptr->siguiente->siguiente = NULL;
    }
}

void recorre(Nodo *lista)
{
    if (lista == NULL)
    {
        printf("\nLista vacia :c\n");
    }
    else
    {
        while (lista != NULL)
        {
            printf("Valor: %i\n", lista->valor);
            lista = lista->siguiente;
        }
    }
}

int buscar(Nodo *lista, int valorABuscar)
{
    int idx = -1;
    while (lista != NULL)
    {
        idx++;
        if (lista->valor == valorABuscar)
        {
            return idx;
        }
        lista = lista->siguiente;
    }
    return -1;
}

void eliminar(Nodo **lista)
{
    Nodo *ptr = *lista;
    if (*lista != NULL)
    {
        if ((*lista)->siguiente == NULL)
        {
            free(*lista);
            (*lista) = NULL;
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

int main()
{
    Nodo *lista1 = NULL;
    
    Lista lista;
    lista.agregar = agregar;
    lista.buscar = buscar;
    lista.eliminar = eliminar;
    lista.recorre = recorre;

    lista.agregar(&lista, 1);

    agregar(&lista1, 1);
    agregar(&lista1, 2);
    agregar(&lista1, 3);
    agregar(&lista1, 3);

    recorre(lista1);

    printf("Encontrado? %s %i\n",
           (buscar(lista1, 1) >= 0 ? "SI" : "NO"),
           buscar(lista1, 1));
    printf("Encontrado? %s %i\n",
           (buscar(lista1, 3) >= 0 ? "SI" : "NO"),
           buscar(lista1, 3));
    printf("Encontrado? %s %i\n",
           (buscar(lista1, 5) >= 0 ? "SI" : "NO"),
           buscar(lista1, 5));

    eliminar(&lista1);
    recorre(lista1);
    eliminar(&lista1);
    recorre(lista1);
    eliminar(&lista1);
    recorre(lista1);
    eliminar(&lista1);
    recorre(lista1);

    return 0;
}
