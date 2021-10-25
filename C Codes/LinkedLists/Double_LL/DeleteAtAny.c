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

node *insert(node *head, int pos)
{
    int count = 1;
    node *t = head;
    // node *ptr = create();
    // ptr->data = data;

    // we need to check several conditions before inserting the node
    // we check if the given position is less than or == to zero or not
    // we check if the position is 1 and the head is NULL or not
    // we check if the position is 1 but the head has a value
    // Finally in the else part we go to the node (3rd node if pos=3) and then attach a new node
    // just before the initial 3rd node.
    if (pos <= 0 || (pos > count && head == NULL))
    {
        printf("INVALID");
    }
    else if (pos == 1 && head == NULL)
    {
        printf("INVALID");
    }
    else if (pos == 1)
    {
        t = head->next;
        free(head);
        head = t;
    }
    else
    {
        while (t->next != NULL && count < pos)
        {
            t = t->next;
            count++;
        }
        t->prev->next = t->next;
        t->next->prev = t->prev;
        free(t);
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

    head = insert(head, 1);
    traversal(head);
}