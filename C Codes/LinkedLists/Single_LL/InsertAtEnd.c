#include <stdio.h>
#include <stdlib.h>

struct node *head = NULL;
struct node
{
    int data;
    struct node *next;
};

void ins(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node)); //it will insert a new node to the start of the linked list
    temp->data = data;
    temp->next = head;
    head = temp;
}

void ins_at_pos_n(int data, int position)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data; //Creating a new node
    int i;
    struct node *temp = head;

    if (position == 1)
    {
        ptr->next = temp;
        head = ptr;
        return;
    }

    for (i = 1; i < position - 1; i++) //moving to the (n-1)th position node in the linked list
    {
        temp = temp->next;
        printf("The nextd is %d ", temp->data);
    }

    ptr->next = temp->next; //Make the newly created node point to next node of ptr temp
    temp->next = ptr;       //Make ptr temp point to newly created node in the linked list
}

void display()
{
    struct node *temp = head;
    printf("\nList: ");
    while (temp != NULL)
    {
        printf("\n%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int i, n, pos, data;
    printf("Enter the number of nodes: \n");
    scanf("%d", &n);
    printf("Enter the data for the nodes: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data);
        ins(data);
    }
    printf("Enter the data you want to insert in between the nodes: \n");
    scanf("%d", &data);
    printf("Enter the position at which you want to insert the nodes: \n");
    scanf("%d", &pos);
    if (pos > n)
    {
        printf("Enter a valid position: ");
    }
    else
    {
        ins_at_pos_n(data, pos);
    }
    display();
    return 0;
}