#include <iostream>
using namespace std;

struct node
{

    int val;
    node *next;

    node(int n)
    {
        val = n;
        next = NULL;
    }
};

void push(node *&root, int n)
{
    if (root == NULL)
    {
        root = new node(n);
        return;
    }
    node *temp = root;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new node(n);
}

void pop(node *&root)
{
    if (root == NULL)
    {
        cout << "Stack is Empty" << endl;
    }

    if (root->next == NULL)
    {
        delete root;
        root = NULL;
        return;
    }

    node *temp = root;

    while (temp->next->next != NULL)
    {

        temp = temp->next;
    }
    delete (temp->next);
    temp->next = NULL;
}

int top(node *root)
{

    if (root == NULL)
    {
        return -1;
    }

    node *temp = root;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    return temp->val;
}

void display(node *&root)
{

    node *temp = root;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *root = NULL;
    push(root, 23);
    push(root, 24);
    push(root, 27);
    push(root, 28);
    display(root);
    cout << top(root) << endl;
    pop(root);
    display(root);
    cout << top(root) << endl;

    return 0;
}