// checking if a entered char is uppercase,lowercase or a numerical

// 1st approach using ASCII codes
#include <iostream>
using namespace std;
/*
int main()
{
    char ch;
    cout << "enter a character" << endl;
    cin >> ch;
    if (ch >= 97 && ch <= 122)
    {
        cout << "it is lowercase" << endl;
    }
    if (ch >= 65 && ch <= 90)
    {
        cout << "it is uppercase" << endl;
    }
    if (ch >= 48 && ch <= 57)
    {
        cout << "it is a number" << endl;
    }
}
*/
// 2nd approach using direct method
int main()
{
    char ch;
    cout << "enter a char" << endl;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "it is a uppercase" << endl;
    }
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "it is lowercase" << endl;
    }
    if (ch >= '0' && ch <= '9')
    {
        cout << "it is a number" << endl;
    }
}
