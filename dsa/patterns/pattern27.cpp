#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        // printing spaces
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        // printing 1st traingle
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        // printing 2nd triangle
        int printvalue = i - 1;
        while (printvalue)
        {
            cout << printvalue;
            printvalue--;
        }

        cout << endl;
        i++;
    }
}