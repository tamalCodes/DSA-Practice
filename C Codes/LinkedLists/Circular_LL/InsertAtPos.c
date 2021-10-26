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

node *insert(node *head, int data, int pos)
{
    node *ptr = create();
    ptr->data = data;

    int count = 1;

    if (pos <= 0 ||)
        return head;
}

void traversal(node *head)
{
    node *h = head;
    do
    {
        printf("%d ", h->data);
        h = h->next;
    } while (h != head);
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
    third->next = head;

    // here we are updating the head
    head = Insert(head, 69);

    traversal(head);
}