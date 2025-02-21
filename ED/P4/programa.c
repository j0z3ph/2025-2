/**
 * @file programa.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Mi primer pila
 * @version 0.1
 * @date 2025-02-21
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "edlib.h"

int main()
{
    Stack *pila = newStack();

    pila->push(&pila, 1);
    pila->push(&pila, 2);
    pila->push(&pila, 5);

    pila->print(&pila);

    printf("%i\n", pila->top(&pila));

    pila->print(&pila);

    printf("%i\n", pila->pop(&pila));

    pila->print(&pila);

    printf("%i\n", pila->size(&pila));

    printf("%s\n", pila->empty(&pila) ? "Vacia" : "Vacian't");

    printf("%i\n", pila->pop(&pila));
    printf("%i\n", pila->pop(&pila));

    printf("%s\n", pila->empty(&pila) ? "Vacia" : "Vacian't");

    printf("%i\n", pila->pop(&pila));

    printf("%s\n", pila->empty(&pila) ? "Vacia" : "Vacian't");
    return 0;
}
