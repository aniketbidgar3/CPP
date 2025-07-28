#include <iostream>
using namespace std;

int main()
{
    try
    {
        int age, marks;
        cout << "Enter Age and Marks : ";
        cin >> age >> marks;
        if (age <= 0 && marks < 0)
        {
            throw string("Age & Marks");
        }
        else if (age <= 0)
        {
            throw string("Age");
        }
        else if (marks < 0)
        {
            throw string("Marks");
        }
        else
        {
            cout << "You Entered Correct Credentials !";
        }

    }
    catch (string arr)
    {

        cout << "You Entered Invalid " << arr << endl;
    }
    return 0;
}
