#pragma once
#include <stdio.h>

/**
 * Create my Stack
 * @return Stack
*/

/*
* @param my struct for each node
*/
typedef struct node
{
    void *data;
    struct node *next;
} Node;

typedef struct stack
{
    Node *head;
    Node *queue;
    int error;
} Stack;

/**
 * All functions for my code used in the Stack.c
*/

/*
* creat and return my new stack
*/

Stack *CreateStack();

/*
* for delete my stack
*/

void DeleteStack(Stack *);

/*
* push in my stack
*/

void StackPush(Stack *, void **item);

/*
* pop in my stack
*/

void *StackPop(Stack *);
/* 
* if my stack return error
*/

int StackGetLastError(Stack *);

size_t StackSize(Stack *);

void StackPrint(Stack *);

