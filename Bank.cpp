#include <iostream>
using namespace std;

class BankAccount
{
    int balance;
    int pin;

public:
    BankAccount()
    {
        balance = 0;
    }

    void setPin(int pin)
    {
        this->pin = pin;
    }

    int getPin()
    {
        return pin;
    }

    void checkBalance()
    {
        cout << "Your Current Balance is : " << balance << endl;
    }

    void withdraw()
    {
        int n;
        cout << "Enter Amount to Withdraw: ";
        cin >> n;
        if (n > balance)
        {
            cout << "Insufficient Balance!" << endl;
        }
        else
        {
            cout << "You Withdrawn Rs. " << n << endl;
            balance -= n;
        }
    }

    void deposit()
    {
        int n;
        cout << "Enter Amount to Deposit: ";
        cin >> n;
        cout << "You Deposited Rs. " << n << endl;
        balance += n;
    }
};

int main()
{
    BankAccount b;

    int pin, cpin;
    do
    {
        cout << "Set Your Pin First\n";
        cout << "Enter Your Pin : ";
        cin >> pin;

        cout << "Confirm Pin : ";
        cin >> cpin;

        if (pin != cpin)
        {
            cout << "Pin Did Not Match!\n";
        }
    } while (pin != cpin);

    b.setPin(pin);

    cout << "\nEnter Pin (Cover Keypad While Entering Pin) : ";
    cin >> pin;

    if (pin == b.getPin())
    {
        int choice;

        do
        {
            cout << "\nChoose an Option:\n";
            cout << "1. Deposit\n";
            cout << "2. Withdraw\n";
            cout << "3. Check Balance\n";
            cout << "4. Exit\n";
            cout << "Enter Option : ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                b.deposit();
                break;
            case 2:
                b.withdraw();
                break;
            case 3:
                b.checkBalance();
                break;
            case 4:
                cout << "Thank you for using our service!\n";
                break;
            default:
                cout << "Invalid Choice\n";
            }
        } while (choice != 4);
    }
    else
    {
        cout << "Wrong PIN!\n";
    }

    return 0;
}
