#include <bits/stdc++.h>

using namespace std;

typedef struct node
{
    char data;
    struct node *left;
    struct node *right;
} Node;

typedef struct
{
    Node *root;
} Tree;

void insert(Tree *tree, char value)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    if (tree->root == NULL)
    {
        tree->root = node;
    }
    else
    {
        Node *temp = tree->root;
        while (temp != NULL)
        {

                if (temp->left == NULL)
                {
                    temp->left = node;
                    return;
                }
                else if (temp->right == NULL)
                {
                    temp->right = node;
                    return;
                }
                else
                {
                    temp = temp->left;
                }
        }
    }
    return;
}

void inorder(Node *node)
{
    if (node != NULL)
    {
        inorder(node->left);
        inorder(node->right);
        cout << node->data;
    }
}

int main()
{
    Tree tree;
    tree.root = NULL;
    string a, b;
    int i = 0;
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < b.size(); i++)
    {
        insert(&tree, b[i]);
    }
    inorder(tree.root);
    return 0;
}