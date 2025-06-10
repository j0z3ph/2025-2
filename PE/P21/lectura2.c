/**
 * @file lectura2.c
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
    int a;
    double b;

    FILE *archi = fopen("Valores.txt", "r");
    if(archi == NULL) {
        printf("error");
        return 1;
    }

    fscanf(archi, "%i-%lf", &a, &b);

    fclose(archi);

    printf("%i\n%lf", a, b);
    
    return 0;
}
