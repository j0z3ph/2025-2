/**
 * @file elmasgrande.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Encuentra el mas grande
 * @version 0.1
 * @date 2025-05-14
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generar(int *arr, int n)
{
    static size_t i = 0;
    if ( i < n)
    {
        arr[i] = rand() % (2 * n);
        i++;
        generar(arr, n);
    }
}

int busca_el_mas_grande(int *arr, int n)
{
    static int the_big_one = -1;
    static size_t i = 0;
    if ( i < n)
    {
        if (arr[i] > the_big_one)
            the_big_one = arr[i];
        i++;
        busca_el_mas_grande(arr, n);
    }
    return the_big_one;
}

int main()
{
    const int N = 1000;
    srand(time(NULL));
    int arr[N];
    int the_big_one;
    
    generar(arr, N);

    the_big_one = busca_el_mas_grande(arr, N);

    printf("El mas grande es %i\n", the_big_one);

    return 0;
}
