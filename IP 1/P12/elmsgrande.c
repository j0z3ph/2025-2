/**
 * @file elmsgrande.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-05-14
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void genera(size_t *arr, size_t n)
{
    static size_t i = 0;
    if ( i < n)
    {
        arr[i] = rand() % (2 * n);
        i++;
        genera(arr, n);
    }
}

size_t busca(size_t *arr, size_t n) {
    static size_t the_big_one = 0;
    static size_t i = 0;
    if ( i < n)
    {
        if (arr[i] > the_big_one)
            the_big_one = arr[i];

        i++;
        busca(arr, n);
    }
    return the_big_one;
}


int main()
{
    srand(time(NULL));
    const size_t N = 100;
    static size_t arr[N];
    size_t the_big_one = 0;

    /*for (size_t i = 0; i < N; i++)
    {
        printf("%zu ", arr[i]);

    }*/

    genera(arr, N);

    the_big_one = busca(arr, N);

    

    printf("El mas grande es %zu\n", the_big_one);

    return 0;
}
