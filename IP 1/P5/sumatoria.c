/**
 * @file sumatoria.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Este programa hace sumas
 * @version 0.1
 * @date 2025-02-28
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int n = 300;
    int sumatoria = 0;

    while (n <= 250)
    {
        sumatoria += n;
        n++;
    }

    printf("La suma es %i\n", sumatoria);


    return 0;
}
