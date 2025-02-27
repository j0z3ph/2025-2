/**
 * @file if.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief ifssss
 * @version 0.1
 * @date 2025-02-26
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int numero;

    printf("Ingresa un numero o te pico >:c ");
    scanf("%d", &numero);

    if (numero > 10)
    {
        printf("Mayor que diez\n");
    }
    else if (numero >= 5 && numero <= 10)
    {
        printf("Menor que diez\n");
    }
    else if (numero < 0)
    {
        printf("Mucho mas menor que diez\n");
    }
    else
    {
        printf("Mas menor que diez\n");
    }

    return 0;
}
