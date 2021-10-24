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

// this is to delete the last node
//
node *Delete(node *head)
{
    node *t = head;
    node *del;

    if (head->next == NULL)
    {
        del = head;
        head = NULL;
    }
    else
    {
        del = head;
        head = head->next;
    }

    free(del);
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

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // here we are updating the head
    head = Delete(head);
    traversal(head);
}