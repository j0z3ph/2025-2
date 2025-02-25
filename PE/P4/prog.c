/**
 * @file prog.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Operadores
 * @version 0.1
 * @date 2025-02-24
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    // int variable = 0b00000000000000000000000000000101;
    int variable = 0x0000000A;

    printf("El numero %i es %s\n", variable, ((variable & 1) == 0 ? "PAR" : "IMPAR"));

    return 0;
}
