/**
 * @file binarior.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-06-09
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int a = 0;
    double b;
    FILE *archi = fopen("Binario.bin", "rb");

    if (archi == NULL)
    {
        printf("Error");
        return 1;
    }

    // fread(&a, sizeof(int), 1, archi);
    fseek(archi, sizeof(int), SEEK_SET);

    fread(&b, sizeof(double), 1, archi);
    fseek(archi, -1 * (long)(sizeof(double) + sizeof(int)), SEEK_CUR);
    fread(&a, sizeof(int), 1, archi);

    fclose(archi);

    printf("%i\n%lf", a, b);

    return 0;
}
