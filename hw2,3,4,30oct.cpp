#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int sum1=0;
    for(int row=0 ; row<3 ; row++)
    {
            sum1=sum1+arr[row][row];
        
    }
cout<<"Sum of principal element:"<<sum1<<endl;
int sum2=0;
int i=0 , j =2;
while(j>=0)
    {
            sum2=sum2+arr[j][i];
            j--, i++;
        
    }
cout<<"Sum of diagonal element:"<<sum2;
int ans1=-100;
for(int row =0 ; row< 3 ; row++)
{
    for( int col=0 ; col< 3; col++)
    {
        if(ans1<arr[row][col])
        {
            ans1=arr[row][col];
        }
    }
}
cout<<ans1;
int ans2=100;
for(int row =0 ; row< 3 ; row++)
{
    for( int col=0 ; col< 3; col++)
    {
        if(ans2<arr[row][col])
        {
            ans2=arr[row][col];
        }
    }
}
cout<<ans2;
}
