#include<bits/stdc++.h>
using namespace std;

int unique( int array[],int size){
    int xorsum=0;
    for (int i = 0; i < size; i++)
    {
        xorsum=xorsum^array[i];
    }
    return xorsum;
    

}

int main()
{
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int array[n];
    cout<<"Now Enter Elements of Array : ";

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<unique(array,n);
    
 return 0;
}


//Identify Unique number by Bit Manipulation method.