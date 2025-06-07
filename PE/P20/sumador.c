/**
 * @file programa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Uniones?
 * @version 0.1
 * @date 2025-06-06
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int suma = 0;
    for (size_t i = 1; i < argc; i++)
    {
        suma += atoi(argv[i]);
    }
    return suma;
}
