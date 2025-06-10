/**
 * @file escritura2.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief 
 * @version 0.1
 * @date 2025-06-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include<stdio.h>

int main()
{
    int a = 5;
    double b = 2.5;

    FILE *archi = fopen("Valores.txt", "w");
    if(archi == NULL) {
        printf("error");
        return 1;
    }

    fprintf(archi, "%i-%lf", a, b);
    fclose(archi);
    
    return 0;
}
