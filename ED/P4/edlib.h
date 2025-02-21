#ifndef __EDLIB_H__
#define __EDLIB_H__
#include<stdbool.h>


// Linked List

typedef struct Nodo
{
    int valor;
    struct Nodo *siguiente;
} Nodo;

typedef struct Lista
{
    Nodo *head;
    void (*agregar)(struct Lista **self, int valor);
    void (*recorre)(struct Lista **self);
    int (*buscar)(struct Lista **self, int valorABuscar);
    void (*eliminar)(struct Lista **self);
} Lista;

void agregar(Lista **lista, int valor);
void recorre(Lista **lista);
int buscar(Lista **lista, int valorABuscar);
void eliminar(Lista **lista);
Lista *nuevaLista();



// Stack

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

typedef struct Stack
{
    Node *head;
    unsigned int __cont;
    void (*push)(struct Stack **self, int value);
    void (*print)(struct Stack **self);
    int (*pop)(struct Stack **self);
    int (*top)(struct Stack **self);
    unsigned int (*size)(struct Stack **self);
    bool (*empty)(struct Stack **self);
} Stack;

void push(Stack **stack, int value);
void print(Stack **stack);
int pop(Stack **stack);
int top(Stack **stack);
unsigned int size(Stack **stack);
bool empty(Stack **stack);
Stack *newStack();

#endif