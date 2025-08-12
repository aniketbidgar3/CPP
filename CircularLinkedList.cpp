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

void remove(node *&root, int n)
{
    node *temp = root;

    if (root == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }

    if (root->next == root && root->val == n)
    {
        delete root;
        root = NULL;
        return;
    }

    if (root->val == n)
    {
        node *last = root;
        while (last->next != root)
        {
            last = last->next;
        }

        node *delNode = root;
        last->next = root->next;
        root = root->next;
        delete delNode;
        return;
    }

    do
    {
        if (temp->next->val == n)
        {
            node *delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
            return;
        }
        temp = temp->next;
    } while (temp != root);

    cout << "Value Does Not Exist" << endl;
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
    insert(root, 97);
    insert(root, 97);
    display(root);
    // remove(root, 12);
    remove(root, 85);
    remove(root, 97);
    display(root);

    return 0;
}