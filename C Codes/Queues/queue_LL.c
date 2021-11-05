// enqueue is adding the node to the last position
// dequeue is removing the node from the first position

#include <stdio.h>
#include <stdbool.h>

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