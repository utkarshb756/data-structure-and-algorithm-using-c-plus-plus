#include <iostream>
using namespace std;
int power()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()

{
    cout << "enter a and b" << endl;
    int answer = power();
    cout << "answer is " << answer << endl;
}
