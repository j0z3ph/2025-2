/**
 * @file dowhile.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Do while
 * @version 0.1
 * @date 2025-02-28
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int n = 500;
    int sumatoria = 0;

    do
    {
        sumatoria += n;
        n++;
    } while (n <= 250);

    printf("La suma es %i\n", sumatoria);

    return 0;
}
