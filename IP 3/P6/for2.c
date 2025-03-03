/**
 * @file while.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief While
 * @version 0.1
 * @date 2025-03-03
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int variable = 0;
    int cont = 0;
    // Una variable con un valor inicial
    printf("Usuario, ingrese un numero positivo: ");
    scanf("%i", &variable);

    for (; cont < variable;) // Una condicion que eventualmente se haga falsa
    {
        if ((cont & 1) == 1)
        {
            cont++;
            continue;
        }

        printf("%i. Mensaje\n", cont + 1);

        // Una mecanismo para hacer que la condicion se haga falsa eventualmente
        cont++;
    }

    return 0;
}
