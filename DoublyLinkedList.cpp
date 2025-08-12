#include <iostream>
using namespace std;

struct node
{

    node *prev;
    int val;
    node *next;
    node(int n)
    {
        val = n;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(node *&root, int n)
{
    node *nn = new node(n);
    if (root != NULL)
    {

        root->prev = nn;
    }
    nn->next = root;
    root = nn;
}

void insert(node *&root, int n)
{

    if (root == NULL)
    {
        insertAtHead(root, n);
        return;
    }
    node *temp = root;
    node *nn = new node(n);

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = nn;
    nn->prev = temp;
}

void remove(node *&root, int val)
{
    node *temp = root;

    if (temp->val == val)
    {
        temp->next->prev = NULL;
        root = temp->next;
        delete temp;
        return;
    }
    while (temp->val != val && temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->prev->next = temp->next;

    if (temp->next != NULL)
    {

        temp->next->prev = temp->prev;
    }

    delete temp;
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
    insert(root, 12);
    insert(root, 67);
    insert(root, 78);
    insert(root, 47);
    display(root);
    remove(root, 47);
    remove(root, 12);
    display(root);

    return 0;
}