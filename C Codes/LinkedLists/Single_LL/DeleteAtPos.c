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
    int count = 1; //used for checks

    // we need the prev pointer for storing the previous memory adress whenever we are inserting something new
    node *t = head, *prev;

    // our lists starts from 1 so if the input pos is 0 then it is invalid
    // Also if the head is null then the input is invalid
    if (pos <= 0 || (pos >= count && head == NULL))
    {
        printf("Invalid");
    }
    else if (pos == 1 && head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    else
    {
        while (t->next != NULL && count < pos)
        {
            prev = t;
            t = t->next;
            count++;
        }

        if (pos > count)
        {
            printf("Invalid");
        }
        else
        {
            prev->next = t->next;
            temp = t;
            free(temp);
        }
    }
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