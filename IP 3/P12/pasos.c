/**
 * @file pasos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer paso por referencia :>
 * @version 0.1
 * @date 2025-05-09
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int suma_valor(int a, int b)
{
    int c = a + b;
    a++;
    b--;
    return a + b;
}

int suma_referencia(int *a, int *b)
{
    int c = *a + *b;
    (*a)++;
    (*b)--;
    return c;
}

int main()
{
    int a = 5;
    int b = 3;

    printf("%i \n", suma_valor(a, b));
    printf("%i - %i \n", a, b);

    printf("%i \n", suma_referencia(&a, &b));
    printf("%i - %i \n", a, b);

    return 0;
}
