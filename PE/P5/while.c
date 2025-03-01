/**
 * @file while.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Ciclo while
 * @version 0.1
 * @date 2025-02-28
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int variable = 1; // Variable con un valor inicial
    while (variable <= 100) // Condicion que eventualmente se hara falso
    {
        printf("%i\n", variable);
        variable++; // Un mecamismo que modifique la variable de tal forma que eventualmente la condicion se haga falso
    }

    return 0;
}
