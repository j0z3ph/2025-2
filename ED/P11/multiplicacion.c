/**
 * @file multiplicacion.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Multi
 * @version 0.1
 * @date 2025-06-03
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define N 10000

void multiplica(int a[N][N], int b[N][N], int c[N][N])
{
    int n = N;
    //int (*c)[n] = malloc(sizeof(int) * n * n);

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            c[i][j] = 0;
            for (size_t k = 0; k < N; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

}

int main()
{
    int (*a)[N] = malloc(sizeof(int) * N * N);
    int (*b)[N] = malloc(sizeof(int) * N * N);
    int (*c)[N] = malloc(sizeof(int) * N * N);

    int cont = 0;
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            a[i][j] = ++cont;
            b[i][j] = cont;
        }
    }

    multiplica(a,b,c);

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            printf("%i ", a[i][j]);
        }
        printf("\n");
    }

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            printf("%i ", b[i][j]);
        }
        printf("\n");
    }
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            printf("%i ", c[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
