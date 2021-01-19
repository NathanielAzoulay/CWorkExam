#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
/**
 * Create my Stack
 * @return Stack 
*/
Stack *CreateStack()
{
    Stack *newStack = NULL;
    newStack->head = (Node *) malloc(sizeof(Node));
    newStack->queue = NULL;
    newStack->head->next = newStack->queue;
    return newStack;
}

void DeleteStack(Stack *stackToDelete)
{
    Node *currentNode = stackToDelete->head;
    while (currentNode->next)
    {
        free(currentNode);
        currentNode = currentNode->next;
    }
    free(currentNode);
    free(stackToDelete);
}

void StackPush(Stack *stack, void **item)
{
    stack->queue = (Node *) malloc(sizeof(Node));
    stack->queue->data = item;
}
