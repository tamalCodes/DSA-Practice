#include <stdio.h>
#include <stdlib.h>

// allocating the memory
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;

} node;

node *create(int data)
{
    node *temp;                          //creating a node pointer
    temp = (node *)malloc(sizeof(node)); // allocating memory in the node
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node *insert(node *root, int data)
{
    if (root == NULL)
        return create(data);
    else if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
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

int main()
{
    node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    inOrder(root);
}