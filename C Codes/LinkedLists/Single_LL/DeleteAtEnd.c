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
        // This loop is basically used to get to the 2nd last node
        while (t->next->next != NULL)
        {
            t = t->next;
        }

        // once we are there we point a new pointer to the last node
        // Then we make the second last pointer the last pointer
        // Then we finally free the memory of the last pointer

        del = t->next;
        t->next = NULL;
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