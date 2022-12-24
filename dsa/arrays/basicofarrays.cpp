#include <iostream>
using namespace std;
// void printingArray(int arr[], int size)
// {
//     cout << "printing the array" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "printing done" << endl;
// }
int main()
{
    // declaring of an array

    // int arr[50];
    // // cout << "no problem ";
    // // it will print any garbage value because we have not initialised any values
    // cout << "value at index 14 is " << arr[14] << endl;

    // int number[5] = {0};

    // printingArray(number, 5);

    int second[15] = {1, 3, 43, 21, 2};
    // int n = 15;
    // printingArray(second, 15);

    int secondSize = sizeof(second) / sizeof(int);
    cout << secondSize << endl;
}
