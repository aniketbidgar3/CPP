#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number Of Elements You Want to Enter : ";
    cin >> n;
    int array[n];
    int copy[n];
    cout << "Enter The Numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        copy[i]=array[i];
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] > array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
       
    }

    cout << "The Third Largest Number is : " << array[2]<<endl;
    for (int i = 0; i < n; i++)
    {
        if(copy[i]==array[2]){
            cout<<"Index of "+to_string(array[2])+" is "+to_string(i);
            break;
        }
    }
    

    return 0;
}