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

void insert(node *&root, int n)
{
    node *nn = new node(n);
    if (root == NULL)
    {
        nn->next = nn;
        root = nn;
        return;
    }
    node *temp = root;

    while (temp->next != root)
    {
        temp = temp->next;
    }

    temp->next = nn;
    nn->next = root;
}

void display(node *&root)
{

    node *temp = root;

    do
    {
        cout << temp->val << " ";
        temp = temp->next;
    } while (temp != root);

    cout << endl;
}

int main()
{
    node *root = NULL;
    insert(root, 12);
    insert(root, 85);
    insert(root, 97);
    display(root);

    return 0;
}