/**
 * @file if.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Aqui hay ifsss
 * @version 0.1
 * @date 2025-02-28
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int numero;

    printf("Usuario, ingresa un numero o te pico >:c ");
    scanf("%d", &numero);

    if (numero > 10)
    {
        printf("Mayor a 10\n");
    }
    else if (numero >= 5 && numero <= 10)
    {
        printf("Menor que 10\n");
    }
    else if (numero > 0)
    {
        printf("Mas menor a 10\n");
    }
    else
        printf("Muchisimo mas menor a 10\n");

    return 0;
}
