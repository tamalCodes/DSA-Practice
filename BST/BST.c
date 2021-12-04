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

// this is how you will be inserting a node
// if root == NUll insert the node there, else if the value > root then root er jaygay root->left diye call kora hobe recursively
// else root->right diye call kora hobe recursively
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

// this is how you search for a value
// if root==value then we return it.
// else if value>root then root er jaygay right subtree diye recursively call
// nahole root er jaygay left subtree diye recursively call
struct node *search(node *root, int data)
{

    if (root == NULL || root->data == data)
        return root;

    if (root->data < data)
        return search(root->right, data);

    return search(root->left, data);
}

// to delete a node from BST
node *delete (node *root, int data)
{
    if (root == NULL)
        return root;
        else if(data>root->data)
        root->right = delete()
}

// here we go for the min element of a tree
node *findMin(node *root)
{
    while (root->left != NULL)
        root = root->left;

    return root;
}

node *findMax(node *root)
{
    while (root->right != NULL)
        root = root->right;

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
    // inserting the root node 50
    int val;
    printf("Enter the root node: ");
    scanf("%d", &val);
    node *root = NULL;
    root = insert(root, val);

    // inserting the other nodes
    // 30 20 40 70 60 80
    int n;
    printf("Enter the total number of nodes : ");
    scanf("%d", &n);
    while (n > 0)
    {
        printf("Enter the value of the node : ");
        scanf("%d", &val);
        insert(root, val);
        n--;
    }
    printf("\n");

    //searching a node
    printf("Enter the value to be searched: ");
    scanf("%d", &val);
    if (search(root, val))
        printf("The data is present \n");
    else
        printf("The data is not present \n");

    // inorder traversal
    printf("Inorder tree : ");
    inOrder(root);
    printf("\n");

    node *a = findMax(root);
    node *b = findMin(root);
    printf("The max element is : %d and the min element is: %d", a->data, b->data);
}