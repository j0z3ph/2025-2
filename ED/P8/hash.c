/**
 * @file hash.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Tablas Hash
 * @version 0.1
 * @date 2025-05-08
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000000
#define H 1024

typedef struct Dato
{
    size_t id;
} Dato;

typedef struct Lista
{
    Dato *datos;
    size_t cont;
} Lista;

typedef struct HashTable
{
    Lista **hash;
    size_t tamanio;
    void (*insertar)(struct HashTable **self, size_t valor);
    Dato *(*buscar)(struct HashTable **self, size_t id);
    void (*imprime)(struct HashTable **self);
} HashTable;

void imprime(HashTable **ht);
void insertar(HashTable **ht, size_t valor);
Dato *buscar(HashTable **ht, size_t id);

Lista *newLista()
{
    Lista *l = malloc(sizeof(Lista));
    l->cont = 0;
    l->datos = NULL;

    return l;
}

Dato *newDato(size_t id)
{
    Dato *d = malloc(sizeof(Dato));
    d->id = id;
    return d;
}

// N es potencia de 2
HashTable *newHashTable(size_t n)
{
    HashTable *ht = malloc(sizeof(HashTable));
    ht->hash = malloc(sizeof(Lista *) * n);
    ht->tamanio = n - 1;
    for (size_t i = 0; i < n; i++)
    {
        ht->hash[i] = newLista();
    }
    ht->buscar = buscar;
    ht->imprime = imprime;
    ht->insertar = insertar;

    return ht;
}

void insertar(HashTable **ht, size_t valor)
{
    size_t index = valor & (*ht)->tamanio;
    if ((*ht)->hash[index]->datos == NULL)
    {
        (*ht)->hash[index]->datos = malloc(sizeof(Dato));
        (*ht)->hash[index]->datos[0].id = valor;
        (*ht)->hash[index]->cont = 1;
    }
    else
    {
        (*ht)->hash[index]->datos = realloc((*ht)->hash[index]->datos, sizeof(Dato) * ((*ht)->hash[index]->cont + 1));
        (*ht)->hash[index]->datos[(*ht)->hash[index]->cont].id = valor;
        (*ht)->hash[index]->cont++;
    }
}

Dato *buscar(HashTable **ht, size_t id)
{
    size_t index = id & (*ht)->tamanio;
    for (size_t i = 0; i < (*ht)->hash[index]->cont; i++)
    {
        if ((*ht)->hash[index]->datos[i].id == id)
        {
            return &((*ht)->hash[index]->datos[i]);
        }
    }
    return NULL;
}

void imprime(HashTable **ht)
{
    for (size_t i = 0; i <= (*ht)->tamanio; i++)
    {
        printf("[ %zu ] ", i);
        for (size_t j = 0; j < (*ht)->hash[i]->cont; j++)
        {
            printf("-> %zu ", (*ht)->hash[i]->datos[j].id);
        }
        printf("\n");
    }
}

int main()
{
    HashTable *ht = newHashTable(H);
    size_t perdido;
    clock_t ini, fin;
    Dato *d;
    Lista *lista = newLista();
    int encontrado = 0;

    srand(time(NULL));

    ini = clock();
    for (size_t i = 0; i < N; i++)
    {
        ht->insertar(&ht, rand() % N);
    }
    fin = clock();

    printf("Hash Tiempo: %lf\n", (double)(fin - ini) / (double)(CLOCKS_PER_SEC / 1000));

    ini = clock();
    for (size_t i = 0; i < N; i++)
    {
        if (lista->datos == NULL)
        {
            lista->datos = malloc(sizeof(Dato));
            lista->datos[0].id = rand() % N;
            lista->cont = 1;
        }
        else
        {
            lista->datos = realloc(lista->datos, sizeof(Dato) * (lista->cont + 1));
            lista->datos[lista->cont].id = rand() % N;
            lista->cont++;
        }
    }
    fin = clock();

    printf("Arreglo Tiempo: %lf\n", (double)(fin - ini) / (double)(CLOCKS_PER_SEC / 1000));

    // ht->imprime(&ht);

    for (size_t i = 0; i < 50; i++)
    {
        perdido = rand() % N;
        ini = clock();
        d = ht->buscar(&ht, perdido);
        fin = clock();
        if (d != NULL)
            printf("Encontrado (%zu). Tiempo: %lf\n", perdido, (double)(fin - ini) / (double)(CLOCKS_PER_SEC / 1000));
        else
            printf("NO Encontrado. Tiempo: %lf\n", (double)(fin - ini) / (double)(CLOCKS_PER_SEC / 1000));

        encontrado = 0;
        ini = clock();
        for (size_t i = 0; i < lista->cont; i++)
        {
            if (lista->datos[i].id == perdido)
            {
                fin = clock();
                printf("Encontrado (%zu). Tiempo: %lf\n", perdido, (double)(fin - ini) / (double)(CLOCKS_PER_SEC / 1000));
                encontrado = 1;
                break;
            }
        }
        if (!encontrado)
        {
            fin = clock();
            printf("NO Encontrado (%zu). Tiempo: %lf\n", perdido, (double)(fin - ini) / (double)(CLOCKS_PER_SEC / 1000));
        }
    }

    return 0;
}
