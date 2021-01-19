#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
/**
 * @return my new stack
*/
Stack *CreateStack()
{
    Stack *newStack;
    newStack->head = (Node *) malloc(sizeof(Node)); // ne pas oublier malloc pour ma memoire
    newStack->queue = newStack->head;
    //newStack->queue = Stack->head;
    newStack->head->next = NULL;
    return newStack;
}
/**

 * @param stackToDelete 
*/

void DeleteStack(Stack *stackToDelete)
{
    Node *currentNode = stackToDelete->head;
    while (currentNode->next)
    {
        Node *next = currentNode->next;
        free(currentNode);
        currentNode = next;
    }
    free(stackToDelete);
}
/**
 * @param stack 
 * @param item 
*/

void StackPush(Stack *stack, void **item)
{
    stack->queue->data = item;
    stack->queue->next = (Node *) malloc(sizeof(Node));
    stack->queue = stack->queue->next;
}
/**
 * @param stackToPrint 
*/

void StackPrint(Stack *stackToPrint)
{
    Node *head = stackToPrint->head;
    Node *currentNode = stackToPrint->head;
    while (currentNode->next)
    {
        printf("%p\n", currentNode->data);
        currentNode = currentNode->next;
    }
    stackToPrint->head = head;
}
/**
 
 * @param stack 
 * @return don't because void
*/

void *StackPop(Stack *stack)
{
    if (stack->head->next)
    {
        Node *head = stack->head;
        void *data = head->data;
        stack->head = stack->head->next;
        free(head);
        return data;
    }
    else
    {
        stack->error = 1;
    }
}
/**
 * @param stack 
 * @return error 
*/

int StackGetLastError(Stack *stack)
{
    return stack->error;
}
/**
 
 * @param stack 
 * @return my conter for my stack
*/

size_t StackSize(Stack *stack)
{
    Node *head = stack->head;
    Node *currentNode = stack->head;
    int counter = 0;
    while (currentNode->next)
    {
        counter++;
        currentNode = currentNode->next;
    }
    stack->head = head;
    return counter;
}