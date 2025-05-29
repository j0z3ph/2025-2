/**
 * @file lifo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Stack
 * @version 0.1
 * @date 2025-05-28
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(int **stack, size_t *size, int value)
{
    if (*stack == NULL)
    {
        *stack = malloc(sizeof(int));
        **stack = value;
        *size = 1;
    }
    else
    {
        *stack = realloc(*stack, sizeof(int) * (*size + 1));
        *(*stack + *size) = value;
        (*size)++;
    }
}

int pop(int **stack, size_t *size)
{
    int value;
    if (*stack != NULL)
    {
        if (*size == 1)
        {
            value = **stack;
            free(*stack);
            *stack = NULL;
            *size = 0;
            return value;
        }
        else
        {
            value = *(*stack + (*size - 1));
            *stack = realloc(*stack, sizeof(int) * (*size - 1));
            (*size)--;
            return value;
        }
    }
    return 0;
}

int main()
{
    int *stack = NULL;
    size_t size = 0;

    int (*saca)(int **stack, size_t *size);
    void (*agregar)(int **stack, size_t *size, int value);
    agregar = push;
    saca = &pop;

    agregar(&stack, &size, 2);
    agregar(&stack, &size, 8);
    agregar(&stack, &size, 5);
    agregar(&stack, &size, 3);
    agregar(&stack, &size, 11);
    agregar(&stack, &size, 14);
    agregar(&stack, &size, 7);
    agregar(&stack, &size, -21);
    agregar(&stack, &size, 0);
    agregar(&stack, &size, 10);
    agregar(&stack, &size, -5);

    for (size_t i = 0; i < size; i++)
    {
        printf("%i ", stack[i]);
    }

    while (stack != NULL)
    {
        printf("\n%i\n", saca(&stack, &size));
        for (size_t i = 0; i < size; i++)
        {
            printf("%i ", stack[i]);
        }
    }

    return 0;
}
