#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int n;
    cout<<"Enter the range of vector:";
    cin>>n;
  vector<int>v(n);
  cout<<"Enter the element of vector:";
  for(int i=0;i<n;i++)
  cin>>v[i];
 

   

    // Find the lower bound of the target element
    auto lower = lower_bound(v.begin(),v.end());

    // Find the upper bound of the target element
    auto upper = upper_bound(v.begin(), v.end());

   
    return 0;
}

    
