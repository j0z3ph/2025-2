/**
 * @file arreglo_punteros.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-05-26
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr[5];

    for (int i = 0; i < 5; i++)
    {
        arr[i] = (int *)malloc(sizeof(int));
        *arr[i] = i;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%p - %i\n", arr[i], *arr[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        free(arr[i]);
    }
    

    return 0;
}
