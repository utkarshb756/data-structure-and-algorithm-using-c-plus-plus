/* two methods for
1
2 3
3 4 5
4 5 6 7
1st using value variable and another is using withous value variable.
*/

// method 1
/* #include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int value = i;
        while (j <= i)

        {
            cout << value << "  ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }

}*/
// alternate method
// method 2
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int r = 1;
    while (r <= n)
    {
        int c = r;
        while (c < 2 * r)
        {
            cout << c << " ";
            c += 1;
        }
        r += 1;
        cout << endl;
    }
}