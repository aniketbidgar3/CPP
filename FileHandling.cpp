#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("file.txt");

    file << "Hello I am Aniket\n";
    file << "I am 22 Years Old\n";
    file << "I am Computer Science Graduate\n";
    file << "I am Currently Working at Disha Computers\n";
    file << "I am Currently Working at Disha Computers\n";

    file.close();

    ifstream read_file("Fazeela.txt");
    string str;

    getline(read_file, str);
    cout << str << endl;
    // getline(read_file, str);
    // cout << str << endl;
    // getline(read_file, str);
    // cout << str << endl;

    while (getline(read_file, str))
    {
        cout << str << endl;
    }
    read_file.close();

    return 0;
}