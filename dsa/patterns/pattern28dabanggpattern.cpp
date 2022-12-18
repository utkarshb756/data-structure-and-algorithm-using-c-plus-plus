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
        int count = 1;
        // printing 1st triangle.
        int printtime1 = n - i + 1;
        while (printtime1)
        {

            cout << count << " ";
            count++;
            printtime1--;
        }
        // printing 2nd triangle.
        int printtime2 = 2 * i - 2;
        while (printtime2)
        {
            cout << "*"
                 << " ";
            printtime2--;
        }
        // printing 3rd triangle.
        int printtime3 = n - i + 1;
        while (printtime3)
        {
            cout << printtime3 << " ";
            printtime3--;
        }

        cout << endl;
        i++;
    }
}