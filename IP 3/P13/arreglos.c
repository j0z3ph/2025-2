/**
 * @file arreglos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mas recursion
 * @version 0.1
 * @date 2025-05-14
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

void imprime(int *arreglo, int n)
{
    static size_t i = 0;
    if ( i < n)
    {
        printf("%i ", arreglo[i]);
        i++;
        imprime(arreglo, n);
    }
}

int main()
{
    const int N = 10;
    int arreglo[N] = {4, 5, 2, 6, 9, 3, 8, 9, 1, 2};

    imprime(arreglo, N);
    return 0;
}
