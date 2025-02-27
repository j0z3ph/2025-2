/**
 * @file while.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mientras
 * @version 0.1
 * @date 2025-02-26
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int n = 1; // Valor inicial

    while (n <= 10) // Condicion de paro
    {
        printf("%d\n", n);
        n++; // Una mecanismo con el cual la condicion se vuelva falsa eventualmente
    }

    return 0;
}
