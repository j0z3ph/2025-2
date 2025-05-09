/**
 * @file burbuja.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Burbuja
 * @version 0.1
 * @date 2025-05-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#define N 1000

void burbuja(size_t *arr) {
    size_t aux;
    bool cambiado = false;
    for (size_t i = 0; i < N-1; i++)
    {
        cambiado = false;
        for (size_t j = 0; j < N-1-i; j++)
        {
            if(arr[j]>arr[j+1]) {
                aux = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = aux;
                cambiado = true;
            }
        }
        if(!cambiado) break;
    }
}


void seleccion(size_t *arr) {
    size_t el_mas_peque = 0;
    size_t aux;

    for (size_t i = 0; i < N-1; i++)
    {
        el_mas_peque = i;
        for (size_t j = i+1; j < N; j++)
        {
            if(arr[j] < arr[el_mas_peque]) {
                el_mas_peque = j;
            }
        }
        aux = arr[el_mas_peque];
        arr[el_mas_peque] = arr[i];
        arr[i] = aux; 
    }
}

int main()
{
    size_t *arr = malloc(sizeof(size_t)*N);
    srand(time(NULL));
    
    clock_t ini, fin;

    printf("Generando...\n");

    for (size_t i = 0; i < N; i++)
    {
        //arr[i] = rand()%N;
        arr[i] = i;
    }
    printf("Ordenando...\n");

    /*for (size_t i = 0; i < N; i++)
    {
        printf("%zu ", arr[i]);
    }
    printf("\n");
    */

    ini = clock();
    //burbuja(arr);
    seleccion(arr);
    fin = clock();

    printf("\nOrdenado [%lf] ms.\n", (double)(fin-ini) / (double)(CLOCKS_PER_SEC/1000));

    /*for (size_t i = 0; i < N; i++)
    {
        printf("%zu ", arr[i]);
    }
    printf("\n");
    */
    
    for (size_t i = 0; i < N; i++)
    {
        //arr[i] = rand()%N;
        arr[i] = i;
    }

    ini = clock();
    burbuja(arr);
    //seleccion(arr);
    fin = clock();

    printf("\nOrdenado [%lf] ms.\n", (double)(fin-ini) / (double)(CLOCKS_PER_SEC/1000));

    
    
    return 0;
}
