#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter num";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "first" << endl;
        break;
    case 2:
        cout << "second" << endl;
        break;
    default:
        cout << "this is a default case" << endl;
    }
}
