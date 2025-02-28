/**
 * @file prog.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ejemplos
 * @version 0.1
 * @date 2025-02-28
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000000000

typedef struct Nodo
{
    size_t valor;
    struct Nodo *sig;
} Nodo;

typedef struct Lista
{
    Nodo *head;
    Nodo *tail;
} Lista;

int main()
{
    clock_t inicio, fin;
    Lista *lista = malloc(sizeof(Lista));
    lista->head = lista->tail = NULL;
    // size_t *arr = malloc(sizeof(size_t)*N);
    size_t *arr = NULL;
    printf("Generando...\n");
    inicio = clock();
    for (size_t i = 0; i < N; i++)
    {
        if (i == 0)
            arr = malloc(sizeof(size_t));
        else
            arr = realloc(arr, sizeof(size_t) * (i + 1));

        arr[i] = i;
    }
    fin = clock();
    printf("Tiempo: %lf\n", (double)(fin - inicio) / CLOCKS_PER_SEC);

    free(arr);
    // Listas
    printf("Generando...\n");
    inicio = clock();
    for (size_t i = 0; i < N; i++)
    {
        if (i == 0)
        {
            lista->head = malloc(sizeof(Nodo));
            lista->tail = lista->head;
        }
        else
        {
            lista->tail->sig = malloc(sizeof(Nodo));
            lista->tail = lista->tail->sig;
        }

        lista->tail->valor = i;
        lista->tail->sig = NULL;
    }
    fin = clock();

    printf("Tiempo: %lf\n", (double)(fin - inicio) / CLOCKS_PER_SEC);

    return 0;
}
