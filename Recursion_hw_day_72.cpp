#include<iostream>
using namespace std;
void print(int n)
{
    if(n==1)
    {
        cout<<"Coder Army"<<endl;
        return;
    }
    cout<<"Coder Army"<<endl;
    print(n-1);
}
int main()
{   
    int n;  
    cout<<"Enter your number:"<<endl;
    cin>>n;
    print(n);
    return 0;
}