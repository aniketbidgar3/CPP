#include <iostream>
using namespace std;

struct node
{
    int val;
    node *left;
    node *right;

    node(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

node *insert(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }

    if (val > root->val)
    {
        root->right = insert(root->right, val);
    }
    else
    {
        root->left = insert(root->left, val);
    }
    return root;
}

void inorder(node *root)
{

    if (root == NULL)
    {

        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main()
{
    // node *root = new node(1);
    // root->left = new node(2);
    // root->right = new node(3);
    // root->left->left = new node(4);
    // root->left->right = new node(5);
    // root->right->left = new node(6);
    // root->right->right = new node(7);
    node *root = NULL;
    root=insert(root,6);

    insert(root, 3);
    insert(root, 7);
    insert(root, 2);
    insert(root, 8);

    inorder(root);

    return 0;
}

/*
          1
         / \
        2   3
       /\   /\
      4  5 6  7
*/