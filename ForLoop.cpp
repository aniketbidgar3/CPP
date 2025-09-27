#include <iostream>
using namespace std;

class loop
{
private:
    int start = 0;
    int end;
    int inc = 1;

public:
    loop(int e)
    {
        end = e;

        for (int i = start; i < end; i += inc)
        {
            cout << i << endl;
        }
    }

    loop(int s, int e)
    {
        start = s;
        end = e;

        for (int i = start; i < end; i += inc)
        {
            cout << i << endl;
        }
    }

    loop(int s, int e, int i)
    {
        start = s;
        end = e;
        inc = i;
        if (start < end)
        {

            for (int i = start; i < end; i += inc)
            {
                cout << i << endl;
            }
        }
        else
        {
            for (int i = start; i > end; i += inc)
            {
                cout << i << endl;
            }
        }
    }
};

int main()
{
    loop l1(20, 10, -5);

    return 0;
}