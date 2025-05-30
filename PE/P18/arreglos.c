/**
 * @file arreglos.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-05-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *matriz[3];

    for (size_t i = 0; i < 3; i++)
    {
        matriz[i] = malloc(sizeof(char) * 3);
    }
    

    for (size_t f = 0; f < 3; f++)
    {
        for (size_t c = 0; c < 3; c++)
        {
            printf("%p\n", matriz[f] + c);
        }
        
    }

    for (size_t i = 0; i < 3; i++)
    {
        free(matriz[i]);
    }
    
    


    
    return 0;
}
