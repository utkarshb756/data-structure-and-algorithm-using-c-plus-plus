/*
A  B  C
D  E  F
G  H  I
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number";
    cin >> n;
    int i = 1;
    char start = 'A';
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << start << "  ";
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
}