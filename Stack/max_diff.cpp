#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    vector<int>arr(n);
    
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int suffix = arr[n-1];
    int ans = 0;
   for( int i=n-2 ; i>=0 ; i--)
    {
        ans=max(ans ,abs(arr[i]-suffix) );
        suffix = max(suffix , arr[i]);
    
    }
    cout<<ans;

   return 0 ;
}