// converting fahernite to celcius

#include <iostream>
using namespace std;
int main()
{
    int f, c;
    cout << "enter temp in fahernite" << endl;
    cin >> f;
    c = ((f - 32) * 5) / 9;
    cout << "temp in celcius " << c << endl;
}