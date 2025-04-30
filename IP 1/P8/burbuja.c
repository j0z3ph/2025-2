/**
 * @file burbuja.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer burbuja
 * @version 0.1
 * @date 2025-04-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 1000

int main()
{
    srand(time(NULL));
    int arr[N];
    int aux = 0;

    // Inicializa el arreglo
    for (int i = 0; i < N; i++)
    {
        arr[i] = (rand()%11)+5;
    }
    
    printf("[ ");
    for (int i = 0; i < N; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("]\n");

    // Aplicamos la burbuja
    for (int j = 0; j < N-1; j++)
    {
        for (int i = 0; i < N-1-j; i++)
        {
            if(arr[i] > arr[i+1]) {
                // Intercambiamos valores
                aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
            }
        }
    }
    

    printf("[ ");
    for (int i = 0; i < N; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("]\n");

    
    return 0;
}
