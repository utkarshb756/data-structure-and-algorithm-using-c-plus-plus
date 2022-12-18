#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"enter number";
     cin>>n;
     int i=1;
     int count=1;
     while(i<=n)
     {
        int space = i-1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int j=1;
        
       int printtime=n-i+1;
        while(printtime){
            
            cout<<count;
            
            j++;
            printtime--;

        }
        cout<<endl;
        count++;
        i++;
     }
}