#include <iostream>
using namespace std;
template <typename T>

T add(T a, T b)
{
    return a + b;
}

int main()
{

    cout << add<int>(12, 34) << endl;
    cout << add<float>(12.6, 34.23) << endl;
    cout << add<string>("Aniket ", "Bidgar") << endl;

    cout << sizeof(string);

    return 0;
}