/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-05-21
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        *(arr + i) = i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%p - %i\n", arr + i, *(arr + i));
    }

    return 0;
}
