/**
 * @file grafo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer grafo
 * @version 0.1
 * @date 2025-05-29
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Grafo
{
    size_t nodos;
    int *adyacencia;
    size_t *cola;
    size_t tamanio;
    size_t *visitados;

} Grafo;

Grafo *nuevoGrafo(size_t numNodos)
{
    Grafo *ptr = malloc(sizeof(Grafo));
    ptr->nodos = numNodos;
    ptr->adyacencia = calloc(numNodos * numNodos, sizeof(int));
    ptr->cola = NULL;
    ptr->tamanio = 0;
    ptr->visitados = calloc(numNodos, sizeof(size_t));
    return ptr;
}

void agregaAdyacencia(Grafo **grafo, size_t indice1, size_t indice2)
{
    int (*m)[(*grafo)->nodos] = (int (*)[])(*grafo)->adyacencia;
    m[indice1][indice2] = 1;
}

void imprimeAdyacencia(Grafo **grafo)
{
    int (*m)[(*grafo)->nodos] = (int (*)[])(*grafo)->adyacencia;
    for (size_t fila = 0; fila < (*grafo)->nodos; fila++)
    {
        for (size_t columna = 0; columna < (*grafo)->nodos; columna++)
        {
            printf("%i ", m[fila][columna]);
        }
        printf("\n");
    }
}

void agregarCola(Grafo **grafo, size_t idx)
{
    if ((*grafo)->cola == NULL)
    {
        (*grafo)->cola = malloc(sizeof(size_t));
        *((*grafo)->cola) = idx;
        (*grafo)->tamanio = 1;
    }
    else
    {
        (*grafo)->cola = realloc((*grafo)->cola, ((*grafo)->tamanio + 1) * sizeof(size_t));
        *((*grafo)->cola + (*grafo)->tamanio) = idx;
        (*grafo)->tamanio++;
    }
}

size_t eliminaCola(Grafo **grafo)
{
    size_t eliminado = 0;
    if ((*grafo)->cola != NULL)
    {
        if ((*grafo)->tamanio == 1)
        {
            eliminado = *((*grafo)->cola);
            free((*grafo)->cola);
            (*grafo)->cola = NULL;
            (*grafo)->tamanio = 0;
            return eliminado;
        }
        else
        {
            eliminado = *((*grafo)->cola);
            memcpy((*grafo)->cola, (*grafo)->cola + 1, sizeof(size_t) * ((*grafo)->tamanio - 1));
            (*grafo)->cola = realloc((*grafo)->cola, sizeof(size_t) * ((*grafo)->tamanio - 1));
            (*grafo)->tamanio--;
            return eliminado;
        }
    }
    return eliminado;
}

void recorreAmplitud(Grafo **grafo, size_t primero)
{
    agregarCola(grafo, primero);
    size_t temp;
    memset((*grafo)->visitados, 0, (*grafo)->nodos * sizeof(size_t));
    while ((*grafo)->cola != NULL)
    {
        temp = eliminaCola(grafo);
        (*grafo)->visitados[temp] = 1;
        int (*m)[(*grafo)->nodos] = (int (*)[])(*grafo)->adyacencia;
        for (size_t i = 0; i < (*grafo)->nodos; i++)
        {
            if (m[temp][i])
            {
                if (!((*grafo)->visitados[i]))
                {
                    agregarCola(grafo, i);
                    (*grafo)->visitados[i] = 1;
                }
            }
        }
        printf("%zu ", temp);
        /*for (size_t i = 0; i < (*grafo)->nodos; i++)
        {
            printf("%zu ", (*grafo)->visitados[i]);
        }
        printf("\n");
        for (size_t i = 0; i < (*grafo)->tamanio; i++)
        {
            printf("%zu ", (*grafo)->cola[i]);
        }

        printf("\n");*/
    }
}

int main()
{

    Grafo *g;
    g = nuevoGrafo(4);

    agregaAdyacencia(&g, 0, 1);
    agregaAdyacencia(&g, 0, 2);
    agregaAdyacencia(&g, 1, 0);
    agregaAdyacencia(&g, 1, 2);
    agregaAdyacencia(&g, 1, 3);
    agregaAdyacencia(&g, 2, 0);
    agregaAdyacencia(&g, 2, 1);
    agregaAdyacencia(&g, 3, 1);

    // imprimeAdyacencia(&g);
    recorreAmplitud(&g, 0);

    return 0;
}
