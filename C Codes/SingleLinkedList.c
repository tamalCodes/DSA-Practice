// C codes to perform the operations of a single Linked list.
#include <stdio.h>
#include <stdlib.h>

// Creating a node
typedef struct node
{
    int data;
    struct node *next;
}

//Memory allocation to the linked list node:
node *
createnode()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    return temp;
}

//Calling the createnode to add and link more nodes :
// also assigning data to the nodes

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
    node *head = createnode();
    node *second = createnode();
    node *third = createnode();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    traversal(head);
}