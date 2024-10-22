#include<iostream>
using namespace std;
int main()
{
    int arr[5];
   
    cout<<"Enter the element of array:";
    for( int i=0 ; i< 5 ; i++)
    {
        cin>>arr[i];
    }
     int X;
    cout<<"Enter the requred sum:";
    cin>>X;
    int sum=0;
    for( int i=0 ; i< 4 ; i++)
    {
        for( int j=i+1 ; j< 5 ; j++)
        {
            sum+=arr[i]+arr[j];
            if( sum==X)
            {
                 cout<<i<<j;
              
            }
           
        }
    }
    return 0;

}