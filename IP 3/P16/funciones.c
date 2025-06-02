/**
 * @file funciones.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-05-21
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int *multi(int *a, int *b)
{
    int c;
    c = (*a) * (*b);
    return &c;
}

int main()
{
    int *resultado;
    int varA = 5, varB = 6;

    resultado = multi(&varA, &varB);

    printf("%p - %i\n", resultado, *resultado);
    return 0;
}
