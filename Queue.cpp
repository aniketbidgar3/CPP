#include <iostream>
using namespace std;
const int size = 10;

class Queue
{
public:
    int arr[size];
    int f;
    int r;
    Queue()
    {
        f = 0;
        r = -1;
    }

    bool isEmpty()
    {
        if (f > r)
        {
            return 1;
        }
        return 0;
    }

    void enque(int n)
    {
        if (r < size - 1)
        {
            r++;
            arr[r] = n;
        }
        else
        {
            cout << "Queue is Full" << endl;
        }
    }

    void deque()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            f++;
        }
    }

    int peek()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[f];
        }
    }

    void print()
    {
        if (isEmpty())
        {
            cout << "No Elements to Print" << endl;
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

    Queue q1;

    q1.enque(23);
    q1.enque(45);
    q1.enque(67);
    q1.enque(23);
    q1.enque(45);
    q1.enque(67);
    q1.enque(23);
    q1.enque(45);
    q1.enque(67);
    q1.enque(23);

    q1.enque(45);
    q1.enque(67);

    q1.print();

    cout << q1.peek() << endl;

    q1.deque();
    q1.deque();

    cout << q1.peek() << endl;

    q1.deque();
    q1.deque();
    q1.deque();

    q1.print();

    cout << q1.peek() << endl;
}