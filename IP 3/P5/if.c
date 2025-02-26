/**
 * @file if.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ifs
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

    printf("Ingrese un numero >:c ");
    scanf("%d", &numero);

    if (numero > 10)
    {
        printf("%i es mas grande que 10\n", numero);
    }
    else if (numero >= 5 && numero <= 10)
    {
        printf("%i es menor que 10\n", numero);
    }
    else if (numero < 0)
    {
        printf("%i es mucho pero mucho mas menor que 10\n", numero);
    }
    else
    {
        printf("%i es mas menor que 10\n", numero);
    }

    return 0;
}
