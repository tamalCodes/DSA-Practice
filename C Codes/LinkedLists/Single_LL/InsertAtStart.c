#include <stdio.h>
#include <stdlib.h>

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

// inserting a new head
// we give the data and the value then we make a new node
// we give data to the new node and attach it before the current head
// we then return the node
node *Insert_Start(node *head, int data)
{
    node *new_head = (node *)malloc(sizeof(node));
    new_head->next = head;
    new_head->data = data;
    return new_head;
}

void traversal(node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main()
{
    node *head = create();
    node *second = create();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = NULL;

    // here we are updating the head
    head = Insert_Start(head, 69);
    traversal(head);
}