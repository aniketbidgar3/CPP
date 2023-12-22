#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int n)
    {
        data = n;
        next = NULL;
    }
};
void insertH(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertM(node *&head, int val, int d)
{
    node *n = new node(val);
    node *temp = head;

    while (temp->next != NULL)
    {
        if (temp->data == d)
        {

            node *m = temp->next;
            temp->next = n;
            n->next = m;
            return;
        }
        else
        {
            temp = temp->next;
        }
    }
}

void insertL(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void Display(node *&head)
{
    cout << "Linked list Is : ";
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "Null" << endl;
}

int main()
{

    node *head = NULL;
    int n;

    insertL(head, 1);
    insertL(head, 2);
    insertL(head, 3);
    insertH(head, 0);
    insertH(head, -1);
    insertH(head, -2);
    insertH(head, -3);

    insertM(head, 5, 0);
    insertM(head, 5, 3); // How to Remove this error

    // do
    // {
    //     cout << "Enter Element or To Terminate Enter '-1' : ";
    //     cin >> n;
    //     if(n!=-1){
    //     insertL(head,n);
    //     }

    // } while (n != -1);

    Display(head);

    return 0;
}