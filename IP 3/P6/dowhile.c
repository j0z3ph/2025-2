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
    int variable = 0; // Una variable con un valor inicial
    int cont = 0;
    printf("Usuario, ingrese un numero positivo: ");
    scanf("%i", &variable);

    do
    {
        printf("%i. Mensaje\n", cont + 1);
        cont++; // Una mecanismo para hacer que la condicion se haga falsa eventualmente
    }while (cont < variable); // Una condicion que eventualmente se haga falsa

    return 0;
}
