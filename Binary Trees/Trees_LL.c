#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;

} node;

node *create()
{
    node *temp;                          //creating a node pointer
    temp = (node *)malloc(sizeof(node)); // allocating memory in the node
    printf("Enter data: ");              //setting data for left right values and returning it
    scanf("%d", &temp->data);
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void preOrder(node *h)
{
    if (h != NULL)
    {
        printf("%d ", h->data);
        preOrder(h->left);
        preOrder(h->right);
    }
}

void inOrder(node *h)
{
    if (h != NULL)
    {
        inOrder(h->left);
        printf("%d ", h->data);
        inOrder(h->right);
    }
}

void postOrder(node *h)
{
    if (h != NULL)
    {
        postOrder(h->left);
        postOrder(h->right);
        printf("%d ", h->data);
    }
}

int main()
{
    node *Root = create();
    node *a = create();
    node *b = create();
    node *c = create();
    node *d = create();
    node *e = create();
    node *f = create();

    Root->left = a;
    Root->right = b;

    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;

    postOrder(Root);
}