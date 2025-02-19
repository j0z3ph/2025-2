/**
 * @file programa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Entradas y salidas
 * @version 0.1
 * @date 2025-02-18
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
