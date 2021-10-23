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
node *insert(node *head, int data, int pos)
{
    node *ptr = create();
    ptr->data = data;
    // int pos;       //taking the position from the user
    int count = 1; //used for checks

    // we need the prev pointer for storing the previous memory adress whenever we are inserting something new
    node *t = head, *prev;

    // our lists starts from 1 so if the input pos is 0 then it is invalid
    // Also if the head is null then the input is invalid
    if (pos <= 0 || (pos > count && head == NULL))
    {
        printf("Invalid");
    }
    else if (pos == 1)
    {
        ptr->next = head; // we attach the ptr to the front of the head
        head = ptr;
    }
    else
    {
        // with the help of this while loop we come to the place we need
        while (t != NULL && count < pos)
        {
            prev = t;
            t = t->next;
            count++;
        }

        if (pos > count)
            printf("Invalid");
        else
        {
            prev->next = ptr; //ataching the new node
            ptr->next = t;
        }
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
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    // here we are updating the head
    head = insert(head, 69, 3);
    traversal(head);
    // return 0;
}