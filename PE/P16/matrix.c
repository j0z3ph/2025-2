/**
 * @file matrix.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-05-23
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int m[3][3];
    int cont = 0;

    for (int fila = 0; fila < 3; fila++)
    {
        for (int col = 0; col < 3; col++)
        {
            *(*(m + fila) + col) = ++cont;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        printf("%i%c", *(*m + i), (i + 1) % 3 == 0 ? '\n' : ' ');
    }

    return 0;
}
