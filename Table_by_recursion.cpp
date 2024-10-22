#include<iostream>
using namespace std;
void print ( int num ,int i)
{   
    if(i==10)
    {
        cout<<num<<"*"<<10<<"="<<num*10<<endl;
        return ;

    }
    cout<<num<<"*"<<i<<"="<<num*i<<endl;
    print(num,i+1);
}
int main()
{
    int n;
    cout<<"Enter your number:";
    cin>>n;
    print ( n , 1);
}
