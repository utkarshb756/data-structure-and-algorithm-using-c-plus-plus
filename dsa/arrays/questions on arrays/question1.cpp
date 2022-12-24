// find the maximum and minimum value of given array
#include <iostream>
using namespace std;
//function for getting max value 
int get_max(int num[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}
//function for getting min value 
int get_min(int num[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cout << "enter size of array";
    cin >> size;

    int num[100];
//taking input of size of array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    //printing maximum value of an array
    cout << "maximum of array is " << get_max(num, size) << endl;
    //printing minum vlaue of an array
    cout << "minimum of array is " << get_min(num, size) << endl;
}