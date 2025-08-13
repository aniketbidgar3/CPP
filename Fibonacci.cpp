#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int t1 = 0;
    int t2 = 1;
    int NextTerm;

    cout << "Fibonnaci Series : ";
    for (int i = 0; i < n; i++)
    {
        cout << t1 << " ";
        NextTerm = t1 + t2;
        t1 = t2;
        t2 = NextTerm;
    }
    cout << endl;
}

int main()
{

    fibonacci(10);

    return 0;
}
