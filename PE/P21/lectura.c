/**
 * @file lectura.c
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
    FILE *archi = fopen("archivo.txt", "r");
    char cadena[100];

    if(archi == NULL) {
        printf("Error");
        return 1;
    }

    fgets(cadena, 100, archi);

    fclose(archi);

    printf("%s", cadena);
    
    return 0;
}
