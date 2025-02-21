#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "edlib.h"

void agregar(Lista **lista, int valor)
{
    if ((*lista)->head == NULL)
    {
        (*lista)->head = (Nodo *)malloc(sizeof(Nodo));
        (*lista)->head->valor = valor;
        (*lista)->head->siguiente = NULL;
    }
    else
    {
        // Buscamos el final
        Nodo *ptr = (*lista)->head;
        while (ptr->siguiente != NULL)
        {
            ptr = ptr->siguiente;
        }
        ptr->siguiente = (Nodo *)malloc(sizeof(Nodo));
        ptr->siguiente->valor = valor;
        ptr->siguiente->siguiente = NULL;
    }
}

void recorre(Lista **lista)
{
    if ((*lista)->head == NULL)
    {
        printf("\nLista vacia :c\n");
    }
    else
    {
        Nodo *ptr = (*lista)->head;
        while (ptr != NULL)
        {
            printf("Valor: %i\n", ptr->valor);
            ptr = ptr->siguiente;
        }
    }
}

int buscar(Lista **lista, int valorABuscar)
{
    int idx = -1;
    Nodo *ptr = (*lista)->head;
    while (ptr != NULL)
    {
        idx++;
        if (ptr->valor == valorABuscar)
        {
            return idx;
        }
        ptr = ptr->siguiente;
    }
    return -1;
}

void eliminar(Lista **lista)
{
    Nodo *ptr = (*lista)->head;
    if (ptr != NULL)
    {
        if ((*lista)->head->siguiente == NULL)
        {
            free((*lista)->head);
            (*lista)->head = NULL;
        }
        else
        {
            while (ptr->siguiente->siguiente != NULL)
            {
                ptr = ptr->siguiente;
            }
            free(ptr->siguiente);
            ptr->siguiente = NULL;
        }
    }
}

Lista *nuevaLista()
{
    Lista *ptr = (Lista *)malloc(sizeof(Lista));
    ptr->agregar = agregar;
    ptr->buscar = buscar;
    ptr->eliminar = eliminar;
    ptr->recorre = recorre;
    return ptr;
}


// STACK STUFF
void push(Stack **stack, int value)
{
    if ((*stack)->head == NULL)
    {
        (*stack)->head = (Node *)malloc(sizeof(Node));
        (*stack)->head->value = value;
        (*stack)->head->next = NULL;
        (*stack)->__cont = 1;
    }
    else
    {
        Node *nodo = (Node *)malloc(sizeof(Node));
        nodo->value = value;
        nodo->next = (*stack)->head;
        (*stack)->head = nodo;
        (*stack)->__cont++;
    }
}

void print(Stack **stack)
{
    if ((*stack)->head == NULL)
    {
        printf("\nStack vacia :c\n");
    }
    else
    {
        Node *ptr = (*stack)->head;
        while (ptr != NULL)
        {
            printf("Valor: %i\n", ptr->value);
            ptr = ptr->next;
        }
    }
}

int pop(Stack **stack)
{
    Node *ptr = (*stack)->head;
    if (ptr != NULL)
    {
        (*stack)->head = ptr->next;
        int res = ptr->value;
        free(ptr);
        (*stack)->__cont--;
        return res;
    }
    return 0;
}

int top(Stack **stack)
{
    Node *ptr = (*stack)->head;
    if (ptr != NULL)
    {
        return ptr->value;
    }
    return 0;
}

unsigned int size(Stack **stack) {
    return (*stack)->__cont;
}

bool empty(Stack **stack) {
    return (*stack)->__cont == 0;
}

Stack *newStack()
{
    Stack *ptr = (Stack *)malloc(sizeof(Stack));
    ptr->__cont = 0;
    ptr->empty = empty;
    ptr->pop = pop;
    ptr->print = print;
    ptr->push = push;
    ptr->size = size;
    ptr->top = top;
    return ptr;
}
