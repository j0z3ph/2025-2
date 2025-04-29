/**
 * @file burbuja.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer burbuja
 * @version 0.1
 * @date 2025-04-28
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

    // Inicializar el arreglo
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

    // Burbuja
    for (int j = 0; j < N - 1; j++)
    {
        for (int i = 0; i < N - 1 - j; i++)
        {
            // Intercambiamos variables
            if(arr[i] > arr[i+1]) {
                aux = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = aux;
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
