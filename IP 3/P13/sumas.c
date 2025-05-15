/**
 * @file sumas.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-05-14
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int suma_digitos(int numero)
{
    static int suma = 0;
    if (numero != 0)
    {
        suma += numero % 10;
        numero /= 10;
        suma_digitos(numero);
    }
    return suma;
}

int main()
{
    int numero = 27;
    int suma = 0;

    suma = suma_digitos(numero);

    printf("La suma es %i ", suma);

    return 0;
}
