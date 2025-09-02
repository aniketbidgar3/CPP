#include <iostream>
using namespace std;
class Date
{
private:
    int day, month, year;

public:
    Date()
    {
    }

    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    bool operator>(Date &d)
    {
        if (year == d.year)
        {
            if (month > d.month)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (year > d.year)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    Date operator-(Date &d)
    {
        Date res(0, 0, 0);
        res.year = year - d.year;
        res.month = month - d.month;
        res.day = day - d.day;
        return res;
    }

    void difference()
    {

        if (day < 0)
        {
            day = 31 + day;
            month -= 1;
        }
        if (month < 0)
        {
            month = 12 + month;
            year -= 1;
        }

        cout << year << " Years, " << month << " Months, " << day << " Days " << endl;
    }

    friend void print(Date d);

    friend void input(Date *d);
};

void print(Date d)
{
    cout << d.day << "/" << d.month << "/" << d.year << endl;
}

void input(Date *d)
{
    cout << "Enter Date : ";
    cin >> d->day >> d->month >> d->year;
}

int main()
{
    Date d1;
    input(&d1);
    print(d1);

    Date d2;
    input(&d2);
    print(d2);

    Date d3;

    if (d1 > d2)
    {
        d3 = d1 - d2;
    }
    else
    {
        d3 = d2 - d1;
    }

    d3.difference();

    return 0;
}

// Just build a program to find the age difference after inputting birthdays.