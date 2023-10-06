#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
cout<<"Prints Using For Loop : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl<<"Prints Using Iterator : ";

    vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl<<"Prints Using Auto keyword : ";

    for (auto element : v)
    {
        cout << element << " ";
    }

    cout << endl<<"Popped Last Element and inserted new : ";

    v.pop_back();
    v.push_back(5);

    for (auto element : v)
    {
        cout << element << " ";
    }


    vector<int> v2(3, 2);

    swap(v, v2);
    cout << endl<<"Swapped Values of vector v2 to v : ";

    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl<<"Swapped Values of vector v to v2 : ";

    for (auto element : v2)
    {
        cout << element << " ";
    }
    cout << endl;


    return 0;
}