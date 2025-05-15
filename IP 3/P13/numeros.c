/**
 * @file numeros.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa 1
 * @version 0.1
 * @date 2025-05-14
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

void numera(int n)
{
    static int i = 0;
    if ( i <= n)
    {
        printf("%d ", i);
        i++;
        numera(n);
    }
}

int main()
{
    int n = 10;

    numera(n);

    return 0;
}
