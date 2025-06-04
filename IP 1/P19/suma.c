/**
 * @file suma.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Restador
 * @version 0.1
 * @date 2025-06-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int suma = 0;
    if(argc > 1) {
        for (size_t i = 1; i < argc; i++)
        {
            suma += atoi(argv[i]);
        }
    }
    //printf("La suma es: %i\n", suma);
    return suma;
}
