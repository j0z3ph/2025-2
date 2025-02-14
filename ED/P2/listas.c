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
} Lista;

void agregar(Nodo **lista, int valor)
{
    if (*lista == NULL)
    {
        *lista = (Nodo *)malloc(sizeof(Nodo));
        (*lista)->valor = valor;
        (*lista)->siguiente = NULL;
    }
    else
    {
    }
}

int main()
{
    Nodo *lista = NULL;

    return 0;
}
