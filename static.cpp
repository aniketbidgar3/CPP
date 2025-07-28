#include <iostream>
using namespace std;

int count = 0;

void increment()
{
    // static count=0;
    count++;
    cout << count << " ";
}

int main()
{

    for (int i = 0; i < 5; i++)
        increment();

    return 0;
}