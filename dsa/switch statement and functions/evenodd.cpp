#include <iostream>
using namespace std;
int isEven(int a)
{
    cin >> a;
    if (a & 1)
    {
        return 0;
    }

    else
    {
        return 1;
    }
}

int main()
{
    int num;
    cout << "enter number" << endl;

    if (isEven(num))
    {
        cout << "it is even " << endl;
    }
    else
    {
        cout << "it is odd" << endl;
    }
}