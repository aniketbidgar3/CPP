#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void print(node *root)
{
    node *temp = root;
    if (root == NULL)
    {
        cout << root->data << "->";
    }
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

void insert(node *&root, int n)
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

int main()
{

    node *root = new node(25);
    (*root).next = new node(29);
    // root->next=new node(25);
    insert(root, 23);
    insert(root, 30);
    insert(root, 75);

    print(root);

    return 0;
}