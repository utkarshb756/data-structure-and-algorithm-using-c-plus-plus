#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter value of n " << endl;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
        sum = sum + i;
    }
    cout << "sum = " << sum << endl;
}