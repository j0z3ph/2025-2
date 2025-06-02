/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-05-21
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int matrix[3][3];
    int cont = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(*(matrix + i) + j) = ++cont;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        printf("%p%c", ((*matrix) + i), (i + 1) % 3 == 0 ? '\n' : ' ');
    }

    return 0;
}
