/**
 * @file sumas.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Programa que suma los digitos de un numero entero
 * @version 0.1
 * @date 2025-03-06
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{

    int numero;
    int suma = 0;
    printf("Usuario, ingresa un numero T-T ");
    scanf("%d", &numero);

    while (numero != 0)
    {
        suma += (numero % 10);
        numero /= 10;
    }

    printf("La suma es ;~; %i\n", suma);

    return 0;
}
