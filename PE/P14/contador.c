/**
 * @file contador.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Cuenta
 * @version 0.1
 * @date 2025-05-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

void imprime(int n) {
    static int i = 0;
    if ( i <= n)
    {
        printf("%i ", i);
        i++;
        imprime(n);
    }
}


int main()
{
    int n = 10;

    imprime(n);
    
    
    return 0;
}
