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
void insertH(node* &head,int val){
    node *n=new node(val);
    n->next=head;
    head=n;

}

void insertM(node* &head,int val){
    node* n= new node(val);
    
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
    cout<<"Linked list Is : ";
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout<<endl;
}

int main()
{

    node *head = NULL;
    int n;
    do
    {
        cout << "Enter Element or To Terminate Enter '-1' : ";
        cin >> n;
        if(n!=-1){

        insertL(head,n);
        }

    } while (n != -1);

    

    Display(head);

    return 0;
}