#include<iostream>
using namespace std;
int factorial(int n){
   int  fact = 1;
    for(int i =1; i<=n; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(n-r)*factorial(r);
    return numerator/denominator;
}
int main()
{
int n, r;
cout<<"enter value of n"<<endl;
cin>>n;
cout<<"enter value of r"<<endl;
cin>>r;
int answer= nCr(n,r);
cout<<"answer is "<<answer<<endl;
}