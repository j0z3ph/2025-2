/**
 * @file lformateada.c
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
    FILE *archi = fopen("Diferente.txt", "r");
    int a;
    double b;
    if(archi == NULL){
        printf("Error");
        return 1;
    }

    fscanf(archi, "%i-%lf",&a, &b);

    fclose(archi);

    printf("%i\n%lf\n", a, b);
    
    return 0;
}
