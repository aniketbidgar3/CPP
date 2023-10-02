#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0,rem,a,b;

    cout<<"Enter Numbers : ";
    cin>>n>>m;

    while(n!=0){
        rem=m%n;
        m=n;
        n=rem;
    }

    cout<<"GCD is : "<<m;
 return 0;
}