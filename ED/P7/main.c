/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-05-02
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    int valor;
    struct Nodo *izq;
    struct Nodo *der;
    struct Nodo *pad;
} Nodo;

typedef struct ABB
{
    Nodo *raiz;
    void (*agregar)(struct ABB **self, int valor);
    Nodo *(*buscar)(struct ABB **self, int valor);
    void (*eliminar)(struct ABB **self, int valor);
} ABB;

// declaraciones
void agregar(ABB **abb, int valor);
Nodo *buscar(ABB **abb, int valor);
void eliminar(ABB **abb, int valor);

Nodo *newNodo(int valor)
{
    Nodo *n = malloc(sizeof(Nodo));
    n->valor = valor;
    n->der = n->izq = n->pad = NULL;

    return n;
}

ABB *newABB()
{
    ABB *a = malloc(sizeof(ABB));
    a->raiz = NULL;
    a->agregar = agregar;
    a->buscar = buscar;
    a->eliminar = eliminar;
    return a;
}

// Agregar
void agregar(ABB **abb, int valor)
{
    if ((*abb)->raiz == NULL)
    {
        (*abb)->raiz = newNodo(valor);
    }
    else
    {
        Nodo *nodo = (*abb)->raiz;
        while (nodo != NULL)
        {
            if (valor < nodo->valor)
            {
                // Insertamos en izquierda
                if (nodo->izq == NULL)
                {
                    nodo->izq = newNodo(valor);
                    nodo->izq->pad = nodo;
                    break;
                }
                else
                {
                    nodo = nodo->izq;
                }
            }
            else
            {
                // Insertamos a la derecha
                if (nodo->der == NULL)
                {
                    nodo->der = newNodo(valor);
                    nodo->der->pad = nodo;
                    break;
                }
                else
                {
                    nodo = nodo->der;
                }
            }
        }
    }
}

// Buscar
Nodo *buscar(ABB **abb, int valor)
{
    if ((*abb)->raiz != NULL)
    {
        Nodo *nodo = (*abb)->raiz;
        while (nodo != NULL)
        {
            if (nodo->valor == valor)
                return nodo;
            else
            {
                if (valor < nodo->valor)
                    nodo = nodo->izq;
                else
                    nodo = nodo->der;
            }
        }
    }
    return NULL;
}

void eliminar(ABB **abb, int valor)
{
    if ((*abb)->raiz != NULL)
    {
        Nodo *nodo_eliminar = (*abb)->buscar(abb, valor);
        if (nodo_eliminar != NULL)
        {
            // Caso 1
            if (nodo_eliminar->der == NULL && nodo_eliminar->izq == NULL)
            {
                if (nodo_eliminar->pad != NULL)
                {
                    if (nodo_eliminar->pad->izq == nodo_eliminar)
                        nodo_eliminar->pad->izq = NULL;
                    else
                        nodo_eliminar->pad->der = NULL;
                    free(nodo_eliminar);
                }
                else
                {
                    // Nodo raiz
                    free(nodo_eliminar);
                    (*abb)->raiz = NULL;
                }
            }
            else if (nodo_eliminar->der != NULL && nodo_eliminar->izq != NULL)
            {
                // Caso tres
                Nodo *minimo = nodo_eliminar->der;
                while(minimo->izq != NULL) {
                    minimo = minimo->izq;
                }

                // aqui ya tenemos el minimo
                nodo_eliminar->valor = minimo->valor;
                if(minimo->der == NULL) {
                    // Solo solin solito
                    if(minimo->pad->der == minimo) minimo->pad->der = NULL;
                    else minimo->pad->izq = NULL;
                    free(minimo);
                } else {
                    if(minimo->pad->der == minimo) minimo->pad->der = minimo->der;
                    else minimo->pad->izq = minimo->der;
                    minimo->der->pad = minimo->pad;
                    free(minimo);
                }
            }
            else
            {
                // Caso dos
                if (nodo_eliminar->pad != NULL)
                {
                    if (nodo_eliminar->der != NULL)
                    {
                        if (nodo_eliminar->pad->der == nodo_eliminar)
                            nodo_eliminar->pad->der = nodo_eliminar->der;
                        else
                            nodo_eliminar->pad->izq = nodo_eliminar->der;
                        nodo_eliminar->der->pad = nodo_eliminar->pad;
                    }
                    else
                    {
                        if (nodo_eliminar->pad->der == nodo_eliminar)
                            nodo_eliminar->pad->der = nodo_eliminar->izq;
                        else
                            nodo_eliminar->pad->izq = nodo_eliminar->izq;
                        nodo_eliminar->izq->pad = nodo_eliminar->pad;
                    }
                    free(nodo_eliminar);
                } else {
                    if(nodo_eliminar->der != NULL) (*abb)->raiz = nodo_eliminar->der;
                    else (*abb)->raiz = nodo_eliminar->izq;
                    (*abb)->raiz->pad = NULL;
                    free(nodo_eliminar);
                }
            }
        }
    }
}

void inorden(Nodo *raiz) {
    if(raiz != NULL) {
        inorden(raiz->izq);
        printf("%i ", raiz->valor);
        inorden(raiz->der);
    }
}


void preorden(Nodo *raiz) {
    if(raiz != NULL) {
        printf("%i ", raiz->valor);
        preorden(raiz->izq);
        preorden(raiz->der);
    }
}

void posorden(Nodo *raiz) {
    if(raiz != NULL) {
        posorden(raiz->izq);
        posorden(raiz->der);
        printf("%i ", raiz->valor);
    }
}

int main()
{
    ABB *abb = newABB();

    // 10,5,7,6,8,15,11,18,12,15,17

    abb->agregar(&abb, 10);
    abb->agregar(&abb, 5);
    abb->agregar(&abb, 7);
    abb->agregar(&abb, 6);
    abb->agregar(&abb, 8);
    abb->agregar(&abb, 15);
    abb->agregar(&abb, 11);
    abb->agregar(&abb, 18);
    abb->agregar(&abb, 12);
    abb->agregar(&abb, 15);
    abb->agregar(&abb, 17);


    inorden(abb->raiz);
    printf("\n");
    preorden(abb->raiz);
    printf("\n");
    posorden(abb->raiz);
    printf("\n");



    abb->eliminar(&abb, 6);
    abb->eliminar(&abb, 5);
    abb->eliminar(&abb, 15);

    abb->eliminar(&abb, 10);
    abb->eliminar(&abb, 5);
    abb->eliminar(&abb, 7);
    abb->eliminar(&abb, 6);
    abb->eliminar(&abb, 8);
    abb->eliminar(&abb, 15);
    abb->eliminar(&abb, 11);
    abb->eliminar(&abb, 18);
    abb->eliminar(&abb, 12);
    abb->eliminar(&abb, 15);
    abb->eliminar(&abb, 17);

    return 0;
}
