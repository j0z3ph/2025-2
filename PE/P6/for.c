/**
 * @file while.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-03-03
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int numero;
    int cont = 1;

    // Variable con valor inicia
    printf("Usuario, ingrese un numero: ");
    scanf("%d", &numero);

    for (; ;) // Condicion que se haga falsa en algun momento
    {
        if(cont > 10) {
            break;
        }
        printf("%i x %d = %i\n", numero, cont, numero * cont);
        // Mecanismo con el cual se volvera falsa la condicion eventualmente
        cont++;
    }

    return 0;
}
