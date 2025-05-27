/**
 * @file el_atascado.c
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

void nada()
{
    int *a = malloc(sizeof(int));
    *a = 10;
    free(a);
}

int main()
{
    while (100)
    {
        nada();
    }

    return 0;
}
