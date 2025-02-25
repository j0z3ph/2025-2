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
    // int valor = 0b00000000000000000000000000000101;
    int valor = 0x0000000A;
    int otroValor = 0b00000000000000000000000000001110;

    printf("El numero %i es %s\n", valor, ((valor & 1) == 0 ? "PAR" : "IMPAR"));

    return 0;
}
