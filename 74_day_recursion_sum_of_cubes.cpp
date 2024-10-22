#include<iostream>
using namespace std;
int cub(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*n*n +cub(n-1);
}
int main()
{
    int num;
    cout<<"Enter your number:";
    cin>>num;
    cout<<cub(num);
    return 0;
}
