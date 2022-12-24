#include <iostream>
#include <math.h>
using namespace std;
int countbit(int n)
{
    int count = 0;

    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    int a;
    int b;
    cin >> a >> b;
    int ans1 = countbit(a);
    int ans2 = countbit(b);
    cout << "number of set bits in a is" << ans1 << endl;

    cout << "number of set bits in b is" << ans2 << endl;
}