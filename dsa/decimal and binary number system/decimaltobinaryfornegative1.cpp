#include <iostream>
#include <math.h>
using namespace std;
int decimaltobinary(int n)
{
    int i = 0;
    int num = 0;

    while (n != 0)
    {
        int r = n & 1;
        n = n >> 1;
        num = num + (r * (pow(10, i)));
        i++;
    }
    return num;
}

int main()
{
    int n;
    cout << "enter negative number";
    cin >> n;
    n = n * (-1);
    int ninbiary = decimaltobinary(n);
    cout << ninbiary << endl;
}