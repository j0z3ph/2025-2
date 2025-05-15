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

int sumasssss(int numero)
{
    static int suma = 0;
    if (numero != 0)
    {
        suma += numero % 10;
        numero /= 10;
        sumasssss(numero);
    }
    return suma;
}

int main()
{
    int numero = 1897;
    int suma = 0;

    suma = sumasssss(numero);

    printf("%i\n", suma);

    return 0;
}
