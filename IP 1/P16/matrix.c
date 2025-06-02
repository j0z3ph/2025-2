/**
 * @file matrix.c
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
    int m[3][3];
    int cont = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(*(m + i) + j) = cont++;
        }
    }

    for (int i = 0; i < 9; i++)
    {
        printf("%i%c", *((*m) + i), (i + 1) % 3 == 0 ? '\n' : ' ');
    }

    return 0;
}
