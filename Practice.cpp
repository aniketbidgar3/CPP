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

    void print(node *&root)
    {
        node *temp = root;
        while (temp->next != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
    
};

int main()
{

    node *root = new node(1);
    root->next = new node(2);
    root->next->next = new node(3);
    root->next->next->next = new node(4);

    root->print(root);

    return 0;
}