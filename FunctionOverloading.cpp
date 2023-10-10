
#include <bits/stdc++.h>
using namespace std;

class Polymorphism
{
private:
public:
    Polymorphism()
    {

    }

    // Function Overloading

    void add(int a, int b)
    {
        cout << a + b << endl;
    }

    void add(double a, double b)
    {
        cout << a + b << endl;
    }

    void add(int a, int b, int c)
    {
        cout << a + b + c << endl;
    }

    ~Polymorphism()
    {

    }
};

int main()
{
    Polymorphism p;

    int a,b,c,n;
    cout<<"Enter No. of Elements 2 or 3 : ";
    cin>>n;
    cout<<"Enter Numbers float or integer : ";
    if(n==2){
        cin>>a>>b;
       cout<<"Sum of Numbers is : ";
        p.add(a,b);
    }
    else{
        cin>>a>>b>>c;
        cout<<"Sum of Numbers is : ";
        p.add(a,b,c);
    }



    return 0;
}