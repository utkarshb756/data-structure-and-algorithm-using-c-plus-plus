#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "enter first number" << endl;
    cin >> a;
    cout << "enter second number" << endl;
    cin >> b;
    char operation;
    cout << "what you want to do + , - , / , * , %" << endl;
    cin >> operation;
    switch (operation)
    {
    case '+':
        cout << "addition  of both number is " << (a + b) << endl;
        break;

    case '-':
        cout << "subtraction of both number is  " << (a - b) << endl;
        break;
    case '/':
        cout << "division of both the number is " << (a / b) << endl;
        break;
    case '*':
        cout << "multiplication of both the number is " << (a * b) << endl;
        break;
    case '%':
        cout << "modulus is " << (a % b) << endl;
        break;
    default:
        cout << "this is wrong operation";
    }
}