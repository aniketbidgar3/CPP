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

int count(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return count(root->left) + count(root->right) + 1;
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight, rightHeight) + 1;
}

int sumNodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return sumNodes(root->left) + sumNodes(root->right) + root->val;
}

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
    cout << endl;

    cout << "Number of Nodes : " << count(root) << endl;
    cout << "Height of Tree  : " << height(root) << endl;
    cout << "Sum of Nodes    : " << sumNodes(root) << endl;

    return 0;
}

/*
          1
         / \
        2   3
       /\   /\
      4  5 6  7
*/