/**
 * @file while.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief While
 * @version 0.1
 * @date 2025-02-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int variable = 0; // Variable con un valor inicial
    while (variable < 10) // Condicion que eventualmente debe ser falsa
    {
        int var2;
        printf("%i - Holi\n", variable + 1);
        variable++; // Una operacion que hace que la condicion sea falsa eventualmente
    }
    
    
    return 0;
}
