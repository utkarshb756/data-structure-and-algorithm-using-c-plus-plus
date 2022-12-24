#include <iostream>
using namespace std;
int AP(int n)
{
    int AP = 3 * n + 7;
    return AP;
}

int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int answer = AP(n);
    cout << "nth term is " << answer << endl;
}
