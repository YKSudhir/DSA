#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number(n) at which you want to print the even numbers.";
    cin>>n;
    int i=1;
    do{
        if(i%2==0)
        {
          cout<<i<<" ";
          i++;
        }
    }
    while(i<=n);
}