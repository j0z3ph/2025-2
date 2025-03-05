/**
 * @file prog3.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Suma de digitos
 * @version 0.1
 * @date 2025-03-04
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int valor;
    int suma = 0;
    printf("Dame une numere o te pique >:| ");
    scanf("%d", &valor);

    while (valor != 0)
    {
        suma += (valor % 10);
        valor /= 10;
    }

    printf("Ay ta tu zume %i >:|\n", suma);

    return 0;
}
