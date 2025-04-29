#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node
{
    int data;
    struct node *left, *right;
} node;

node* insert(node *root, int new_data);
node* Delete(node *root, int key);
void print_preorder(node *root);

int main()
{
    node *ROOT = NULL;
    ROOT = insert(ROOT, 10);
    ROOT = insert(ROOT, 5);
    ROOT = insert(ROOT, 15);
    ROOT = insert(ROOT, 7);
    ROOT = insert(ROOT, 3);

    printf("Print BST in Preorder : ");
    print_preorder(ROOT);

    ROOT = Delete(ROOT, 3);

    printf("Print BST in Preorder : ");
    print_preorder(ROOT);

    return 0;
}

node *insert(node *root, int new_data)
{
    if (root == NULL)
    {
        node *temp = (node*)malloc(sizeof(node));
        temp->data = new_data;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }

    else
    {
        if (new_data <= root->data)
        {
            root->left = insert(root->left, new_data);
        }
        else if (new_data > root->data)
        {
            root->right = insert(root->right, new_data);
        }
    }

    return root;
}

node* Delete(node *root, int key)
{
    if(root == NULL)
    {
        return NULL;
    }

    else if(key < root->data)
    {
        root->left = Delete(root->left, key);
    }

    else if(key > root->data)
    {
        root->right = Delete(root->right, key);
    }

    else
    {
        //no child
        if(root->left == NULL && root->right == NULL)
        {
            free(root);
            root == NULL;
        }

        //1 child (right child avl)
        else if(root->left==NULL)
        {
            node *ptr = root;
            root = root->right;
            free(ptr);
        }

        //1 child (left child avl)
        else if(root->right==NULL)
        {
            node *ptr = root;
            root = root->left;
            free(ptr);
        }

        //2 child
        else
        {
            node *ptr = root->right;

            //getting the smallest value of right subtree of root
            while(ptr->left != NULL)
            {
                ptr = ptr->left;
            }

            root->data = ptr->data;
            root->right = Delete(root->right, ptr->data);
        }
    }
    return root;
}

void print_preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    printf("%d ", root->data);

    print_preorder(root->left);
    print_preorder(root->right);
}
