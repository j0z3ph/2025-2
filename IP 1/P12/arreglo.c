/**
 * @file arreglo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-05-14
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

void imprime(int *arr, int n)
{
    static int i = 0;
    if ( i < n)
    {
        printf("%d ", arr[i]);
        i++;
        imprime(arr, n);
    }
}

int main()
{
    const int N = 10;
    int arr[N] = {1, 4, 2, 3, 5, 6, 7, 3, 8, 0};

    imprime(arr, N);
    return 0;
}
