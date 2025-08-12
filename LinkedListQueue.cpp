#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *next;

    node(int n)
    {
        val = n;
        next = NULL;
    }
};

int peek(node *&root)
{
    if (root == NULL)
    {
        cout << "Queue is Empty" << endl;
        return -1;
    }
    return root->val;
}

void deque(node *&root)
{
    if (root == NULL)
    {
        cout << "Queue is Empty" << endl;
        return;
    }

    node *temp = root;
    root = temp->next;
    delete (temp);
}

void enque(node *&root, int n)
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
    enque(root, 13);
    enque(root, 16);
    enque(root, 56);
    enque(root, 35);
    display(root);

    deque(root);
    deque(root);

    display(root);
    cout << peek(root);

    return 0;
}