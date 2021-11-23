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

bool notUnderFlow()
{
    if (top != MIN)
        return true;

    return false;
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

// here we are taking out a value out of the stack
// first we check if there are values or not, then we remove a value by just decrementing the top
void pop()
{
    if (notUnderFlow())
        printf("Removed value: %d \n", stack[top--]);
    else
        printf("Underflow");
}

// peek is used to display the top value of the stack
void peek()
{
    if (notUnderFlow())

        printf("Displaying : %d\n", stack[top]);

    else

        printf("Underflow");
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

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    printStack();
    pop();
    printStack();
    peek();
    return 0;
}