#include <iostream>
using namespace std;


int main()
{
    int n;
    cout << "Enter No. of Elements in Array : ";
    cin >> n;
    int array[n];
    cout << "Enter Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // ******************** Selection Sort ********************//

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (array[j] < array[i])
    //         {
    //             int temp = array[j];
    //             array[j] = array[i];
    //             array[i] = temp;
    //         }
    //     }
    // }

    // ******************** Bubble Sort ********************//

    // int count = 0;

    // while (count < n - 1)
    // {
    //     for (int i = 0; i < n - count; i++)
    //     {

    //         if (array[i + 1] < array[i])
    //         {
    //             int temp = array[i + 1];
    //             array[i + 1] = array[i];
    //             array[i] = temp;
    //         }
    //     }
    //     count++;
    // }

    // ******************** Insertion Sort ********************//

    // for (int i = 0; i < n; i++)
    // {
    //     int current = array[i];
    //     int j = i - 1;

    //     while (j >= 0 && array[j] > current)
    //     {
    //         array[j + 1] = array[j];
    //         j--;
    //     }
    //     array[j + 1] = current;
    // }

    for (int i = 0; i < n; i++)
    {
        cout << array[i];
    }

    return 0;
}