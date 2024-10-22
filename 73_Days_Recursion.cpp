#include<iostream>
using namespace std;
void print(int num)
{   
   if(num==10)
{
    cout<<10<<endl;
    return ;
}
    print(num-1);
    cout<<num<<endl;
    
    }
int main()
{
    int N;
    cout<<"Enter your number:";
    cin>>N;
    print(N);
}
