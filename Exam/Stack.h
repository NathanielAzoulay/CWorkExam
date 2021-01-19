#pragma once
#include <stdio.h>

typedef struct node
{
    void **data;
    struct Node *next;
} Node;

typedef struct stack
{
    Node *head;
    Node *queue;
} Stack;

Stack *CreateStack();

void DeleteStack(Stack *);

void StackPush(Stack *, void **item);

void **StackPop();

int StackGetLastError(Stack *);

size_t StackSize(Stack *);

void StackPrint(Stack *);

