#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;

node *create()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    return temp;
}

// here we are coming all the way to the last node with the help of while loop
// then we are attaching the node named ptr after it
node *insert(node *head, int data)
{
    node *t = head;

    node *ptr = create();
    ptr->data = data;

    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        while (t->next != NULL)
        {
            t = t->next;
        }

        t->next = ptr;
        ptr->prev = t;
        ptr->next = NULL;
    }

    return head;
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
    node *third = create();
    node *fourth = create();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = third;

    third->data = 30;
    third->prev = second;
    third->next = fourth;

    fourth->data = 40;
    fourth->prev = third;
    fourth->next = NULL;

    head = insert(head, 69);
    traversal(head);
}