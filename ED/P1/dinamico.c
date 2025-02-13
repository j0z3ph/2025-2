/**
 * @file dinamico.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-02-13
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *arreglo = (int *)malloc(sizeof(int) * 100);
    int *arreglo2 = (int *)calloc(100, sizeof(int));

    arreglo2 = (int *)realloc(arreglo2, sizeof(int));

    memset(arreglo, 0, sizeof(int) * 100);

    for (int i = 0; i < 100; i += 10)
    {
        arreglo[i] = 0;
        arreglo[i + 1] = 0;
        arreglo[i + 2] = 0;
        arreglo[i] = 0;
        arreglo[i] = 0;
        arreglo[i] = 0;
        arreglo[i] = 0;
        arreglo[i] = 0;
        arreglo[i] = 0;
    }

    free(arreglo);
    free(arreglo2);

    return 0;
}
