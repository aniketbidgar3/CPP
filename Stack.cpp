#include <iostream>
using namespace std;
const int size = 10;

class Stack
{
public:
    int f;
    int r;
    int arr[size];

    Stack()
    {
        f = 0;
        r = -1;
    }

    bool isEmpty()
    {
        if (r == -1)
        {
            return 1;
        }
        return 0;
    }

    void push(int n)
    {
        if (r < size - 1)
        {
            r++;
            arr[r] = n;
        }
        else
        {
            cout << "Stack is Full" << endl;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            r--;
        }
    }

    int top()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {

            return arr[r];
        }
    }

    void print()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            for (int i = f; i <= r; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{

    Stack s1;

    // cout << s1.isEmpty() << endl;
    s1.push(23);
    s1.push(93);
    s1.push(24);
    s1.push(63);
    cout << s1.top() << endl;
    s1.push(78);
    s1.push(74);
    s1.push(74);
    s1.push(74);
    s1.push(74);
    s1.push(74);

    s1.print();

    s1.pop();
    cout << s1.top() << endl;
    s1.pop();

    s1.print();

    cout << s1.top() << endl;

    return 0;
}