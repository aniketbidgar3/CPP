#include <iostream> // For cin and cout
using namespace std;
int main()
{
    // Your C++ code here
    cout << "Enter a number: ";
    int num;
    cin >> num;
    cout << "You entered: " << num << endl;

    // Pause the console window
    cout << "Press Enter to exit...";
    // Discard any leftover newline characters from previous input
    cin.ignore();
    
    // Wait for a character input
    cin.get();

    return 0;
}