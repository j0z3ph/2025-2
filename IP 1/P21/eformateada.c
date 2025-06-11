/**
 * @file eformateada.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-06-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int a = 10;
    double b = 3.8;
    FILE *archi = fopen("Diferente.txt", "w");

    if(archi == NULL) {
        printf("Error");
        return 1;
    }

    fprintf(archi, "%i-%lf", a, b);

    fclose(archi);

    
    return 0;
}
