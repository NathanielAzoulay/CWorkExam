#include <stdio.h>
#include "Stack.c"


int main()
{
    Stack *stack = CreateStack(); // commencer par crée ma stack 

    /*
    * Push in my stack value..
    */

    StackPush(stack, 5);

    StackPush(stack, 6);

    StackPush(stack, 7);

    StackPush(stack, 8);

    /*
    *if i want to pop in my stack 
    */

    StackPop(stack);
    
    StackPrint(stack);

    printf("Size: %zu", StackSize(stack));

    return 0;
}
