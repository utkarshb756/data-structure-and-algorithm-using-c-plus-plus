#include <iostream>
using namespace std;
int fibbonaci(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 3; i <= n; i++)
    {

        int next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main()
{
    int n;
    cout << "enter value of n" << endl;
    cin >> n;
    int answer = fibbonaci(n);
    cout << answer;
}