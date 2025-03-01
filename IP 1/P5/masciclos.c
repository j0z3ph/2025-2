/**
 * @file masciclos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mas ciclos y ramificaciones
 * @version 0.1
 * @date 2025-02-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int variable = 0;

    while (variable < 100) 
    {
        variable++;
        if((variable & 1) == 0) continue;
        printf("%i es impar\n", variable);
        
    }
    
    
    return 0;
}
