#include <stdio.h>
#include <stdlib.h>

// creating a node
typedef struct node
{
    int data;
    struct node *next;
} node;

node *create()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    return temp;
}

//inserting the value
void insert()
{
    node *ptr = create();
    int pos;       //taking the position from the user
    int count = 1; //used for checks

    // we need the prev pointer for storing the previous memory adress whenever we are inserting something new
    node *t = head, *prev;
}

int main()
{
    return 0;
}