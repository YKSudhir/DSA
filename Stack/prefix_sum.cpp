#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int Total_sum = 0 ;
    int Prefix_sum = 0 ;
   for( int i=0 ; i<n ; i++)
   {
    Total_sum = Total_sum + arr[i]; 
   }
   int i = 0;
   for(; i<n-1 ; i++)
   {
    Prefix_sum = Prefix_sum + arr[i];
    if(Prefix_sum == Total_sum - Prefix_sum)
    {
        cout<<i;
        break;
    }
   }
}