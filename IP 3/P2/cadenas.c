/**
 * @file cadenas.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mas entradas y salidas
 * @version 0.1
 * @date 2025-02-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    char cadena[5];
    fgets(cadena, 5, stdin);

    puts(cadena);
    
    return 0;
}
