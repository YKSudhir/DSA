#include<iostream>
using namespace std;
void oddnum(int num)
{   
    if(num==1)
    {
        cout<<1<<endl;
        return;
    }
   cout<<num<<endl;
   oddnum(num-2);
}
int main()
{   
    int n ;
    cout<<"Enter your odd number:"<<endl;
    cin>>n;
   oddnum(n);
   return 0;
}