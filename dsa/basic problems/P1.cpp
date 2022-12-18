// checking if number entered is prime or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number";
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "it is not prime for  " << i << endl;
        }
        else
        {
            cout << "it is prime for " << i << endl;
        }
        i++;
    }
}