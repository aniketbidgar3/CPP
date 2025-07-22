#include <iostream>
using namespace std;

struct node
{
    int val;
    node *left;
    node *right;

    node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void inorder(node *root)
{

    if (root == NULL)
    {

        return;
    }
    cout << root->val << " ";
    inorder(root->left);
    inorder(root->right);
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

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