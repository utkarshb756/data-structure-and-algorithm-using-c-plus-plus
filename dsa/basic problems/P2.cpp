// comparing two numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a number a";
    cin >> a;
    cout << "entewr a number b";
    cin >> b;
    if (a < b)
    {
        cout << "b is greater than a";
    }
    if (a == b)
    {
        cout << "a and b is equal ";
    }
    if (a > b)
    {
        cout << "a is greater than b ";
    }
}