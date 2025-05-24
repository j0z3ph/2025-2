/**
 * @file malloc.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-05-23
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *entero;

    entero = (int *)calloc(10, sizeof(int));

    *entero = 10;
    entero[1] = 11;
    *(entero + 2) = 12;

    for (int i = 0; i < 10; i++)
    {
        printf("%p - %p - %i\n", &entero[i], entero + i, *(entero + i));
    }

    return 0;
}
