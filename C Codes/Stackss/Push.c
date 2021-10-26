#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 5
#define MIN -1
int stack[MAX];
int top = -1;

// this is to check if there is place in the stack or not
// if there is no place then we simply return false and it's overflow
bool notOverFlow()
{
    if (top + 1 < MAX)
        return true;

    return false;
}

// this is to print the stack, from 0 to top
void printStack()
{
    if (notOverFlow())
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
    }
    else
    {
        printf("\nStack Underflow\n");
    }
    printf("\n\n");
    return;
}

// here we are pushing the value at ++top as top=-1
// after that again we will check if space is available and then push again
void push(int value)
{
    if (notOverFlow())
        stack[++top] = value;
    else
    {
        printf("\nStack Overflow\n ");
    }
}

int main()
{
    push(10);
    push(20);
    printStack();
    return 0;
}