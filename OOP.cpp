#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int age = 0, id = 0;

public:
    Student()
    {
        cout << "\nDefault Constructor called\n";
    }

    Student(string n, int a, int i)
    {
        cout << "\nParameterised Constructor called" << endl;
        name = n;
        age = a;
        id = i;
    };

    Student(Student &a)
    {
        cout << "\nCopy Constructor called\n";
        name = a.name;
        age = a.age;
        id = a.id;
    }

    void Display()
    {

        cout << "\nName     : " << name;
        cout << "\nAge      : " << age;
        cout << "\nRoll No. : " << id << endl;
    }

    bool operator==(Student &a)
    {
        if (name == a.name && age == a.age && id == a.id)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    ~Student()
    {
        cout << "\nDestructor Called" << endl;
    };
};

int main()
{
    Student r;
    r.Display();
    Student s("Aniket", 19, 26);
    s.Display();
    Student t = s;
    t.Display();

    if (s == t)
    {
        cout << "\nobjects 's' and 't' are same ";
    }
    else
    {
        cout << "\nobjects 's' and 't' are NOT same ";
    }
    if (s == r)
    {
        cout << "\nobjects 's' and 'r' are same ";
    }
    else
    {
        cout << "\nobjects 's' and 'r' are NOT same ";
    }
    return 0;
}