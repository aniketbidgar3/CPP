#include <iostream>
using namespace std;
class employee
{

    int salary;

public:
    string name;

    employee(string n, int s)
    {
        name = n;
        salary = s;
    }

    friend void maxSalary(employee e, employee f);
    friend void Avg(employee e, employee f);
};

 void Avg(employee e, employee f){
    cout<<(e.salary+f.salary)/2<<endl;
 }
void maxSalary(employee e, employee f)
{
    if (e.salary > f.salary)
    {
        cout << e.name << " Has High Salary" << endl;
    }
    else
    {
        cout << f.name << " Has High Salary" << endl;
    }
}

int main()
{
    employee e("A", 1000);
    employee f("B", 1500);
    employee g("C", 15000);
    employee h("D", 12000);

    maxSalary(e,f);
    maxSalary(g,h);

    Avg(f,g);

    // if (e.salary > f.salary)
    // {
    //     cout << e.name << " Has High Salary" << endl;
    // }
    // else
    // {
    //     cout << f.name << " Has High Salary" << endl;
    // }

    return 0;
}

// protected