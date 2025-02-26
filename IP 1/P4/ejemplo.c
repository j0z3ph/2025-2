/**
 * @file ejemplo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Operadores
 * @version 0.1
 * @date 2025-02-25
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    //int variable = 0b11111111111111111111111111111011;
    int variable = 0x0000000B;
    //printf("%i\n", ~variable);
    printf("El numero %i es %s\n", variable, ((variable & 1) == 0? "PAR" : "IMPAR"));

    return 0;
}
