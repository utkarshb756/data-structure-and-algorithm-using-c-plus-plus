#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number";
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;

        int printtime = i;
        while (printtime)
        {

            cout << count;

            j++;
            printtime--;
        }
        cout << endl;
        count++;
        i++;
    }
}
