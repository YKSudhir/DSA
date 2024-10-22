#include<iostream>
using namespace std;
void print(int num,int N)
{   
    if(num==N)
    {
        cout<<num;
        return ;
    }
    cout<<num<<endl;
    print(num+1,N);
}
int main()
{
    int N;
    cout<<"Enter your number:";
    cin>>N;
    print(10,N);
}
