/**
 * @file lifo.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief
 * @version 0.1
 * @date 2025-05-29
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(int **stack, int *size, int value)
{
    if (*stack == NULL)
    {
        *stack = malloc(sizeof(int));
        **stack = value;
        (*size)++;
    }
    else
    {
        *stack = realloc(*stack, (*size + 1) * sizeof(int));
        *(*stack + *size) = value;
        (*size)++;
    }
}

int pop(int **stack, int *size)
{
    int removed = 0;
    if ((*stack) != NULL)
    {
        if (*size == 1)
        {
            removed = **stack;
            free(*stack);
            *stack = NULL;
            *size = 0;
            return removed;
        }
        else
        {
            removed = *(*stack + (*size - 1));
            *stack = realloc(*stack, sizeof(int) * (*size - 1));
            (*size)--;
            return removed;
        }
    }
    return removed;
}

int main()
{
    int *stack = NULL;
    int size = 0;

    push(&stack, &size, 5);
    push(&stack, &size, 7);
    push(&stack, &size, -20);
    push(&stack, &size, 12);
    push(&stack, &size, 24);
    push(&stack, &size, 4);
    push(&stack, &size, 50);

    for (size_t i = 0; i < size; i++)
    {
        printf("%i ", stack[i]);
    }

    while (stack != NULL)
    {
        printf("\n%i\n", pop(&stack, &size));
        for (size_t i = 0; i < size; i++)
        {
            printf("%i ", stack[i]);
        }
    }

    return 0;
}
