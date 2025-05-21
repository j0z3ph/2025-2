/**
 * @file arreglo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Arreglos
 * @version 0.1
 * @date 2025-05-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>


int main()
{
    char cad[5] = "Hola";
    char *ptr;
    ptr = cad;

    printf("%p - %c\n", cad, *(cad+3));
    printf("%p - %c\n", cad, ptr[3]);
    
    return 0;
}
