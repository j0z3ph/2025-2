/**
 * @file btree2.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Binary Tree 2
 * @version 0.1
 * @date 2025-03-06
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct btree2
{
    /* data */
};


typedef struct Node
{
    size_t value;
    struct Node *left;
    struct Node *rigth;
} Node;

typedef struct BTree
{
    Node *root;
    size_t size;
    //size_t __last;
    //void (*insert)(struct BTree **self, size_t value);
    //void (*freeBTree)(struct BTree **self);
    //bool (*delete)(struct BTree **self, size_t value);
} BTree;

Node *newNode(size_t value) {
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->left = node->rigth = NULL;
    return node;
}


BTree *newBTree()
{
    BTree *tree = malloc(sizeof(BTree));
    tree->root = NULL;
    tree->size = 0;
    //tree->__last = 0;
    //tree->insert = insert;
    //tree->freeBTree = freeBTree;
    //tree->delete = delete;
    return tree;
}

void insert(struct BTree **tree, size_t value) {
    if((*tree)->root == NULL) {
        (*tree)->root = newNode(value);
    } else {

    }
}


int main()
{
    /* code */
    return 0;
}
