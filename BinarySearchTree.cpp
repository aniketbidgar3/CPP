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

node *getInorderSuccessor(node *root)
{
    while (root != NULL && root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

node *remove(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key < root->val)
    {
        root->left = remove(root->left, key);
    }
    else if (key > root->val)
    {
        root->right = remove(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            node *IS = getInorderSuccessor(root->right);
            root->val = IS->val;
            root->right = remove(root->right, IS->val);
        }
    }
    return root;
}

void search(node *root, int val)
{
    if (root == NULL)
    {
        cout << "Node " << val << " Not Found" << endl;
        return;
    }

    if (root->val == val)
    {
        cout << "Node " << val << " Found" << endl;
        return;
    }

    else if (val > root->val)
    {
        search(root->right, val);
    }
    else
    {
        search(root->left, val);
    }
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

    node *root = NULL;
    root = insert(root, 6);

    insert(root, 3);
    insert(root, 7);
    insert(root, 2);
    insert(root, 8);

    inorder(root);
    cout << endl;

    remove(root, 7);

    inorder(root);
    cout << endl;

    search(root, 7);
    search(root, 9);

    cout << "Number of Nodes : " << count(root) << endl;
    cout << "Height of Tree  : " << height(root) << endl;
    cout << "Sum of Nodes    : " << sumNodes(root) << endl;

    return 0;
}
