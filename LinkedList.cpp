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

// void deleteH(node *&head)
// {
//     node *deleteNode = head;
//     head = head->next;
//     delete deleteNode;
// }

// void deleteM(node *&head, int val)
// {
//     if (head == NULL)
//     {
//         return;
//     }

//     if (head->next == NULL || head->data == val)
//     {
//         deleteH(head);
//     }

//     node *temp = head;

//     while (temp->next->data != val)
//     {
//         temp = temp->next;
//     }

//     node *deleteNode = temp->next;
//     temp->next = temp->next->next;

//     delete deleteNode;
// }

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

bool Search(node *&head, int val)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == val)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

node *Reverse(node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
}

node *ReverseRecursive(node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newhead = ReverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
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
    // insertM(head, 5, 3);  How to Remove this error

    Display(head);

    deleteH(head);
    deleteM(head, 5);

    // deleteM(head, -3); How to Remove this error

    Display(head);

    node *RevHead = Reverse(head);
    Display(RevHead);

    RevHead = ReverseRecursive(RevHead);
    Display(RevHead);

    cout << Search(head, 2);

    // do
    // {
    //     cout << "Enter Element or To Terminate Enter '-1' : ";
    //     cin >> n;
    //     if(n!=-1){
    //     insertL(head,n);
    //     }

    // } while (n != -1);

    return 0;
}