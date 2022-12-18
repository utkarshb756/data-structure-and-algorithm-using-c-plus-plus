/*
   *   *   *   *
   *   *   *   *
   *   *   *   *
   *   *   *   *
(base) utkarshbansal@1*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number";
    cin >> n;

    int i;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "   "
                 << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}