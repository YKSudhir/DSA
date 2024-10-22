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
    int ans= 0 ;
    
   for( int i=0 ; i<n ; i++)
   {
    int diff = 0;
   for(int j =i+1; j<n-1 ; j++)
   {
    diff = abs(arr[i]-arr[j]);
    ans  = max(diff , ans);
    
   }
   }
   cout<<ans;
}