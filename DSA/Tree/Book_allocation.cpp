#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[4]={12,34,67,90};
    int n = 4;
    int sum = 0 ;
    for(int i =0 ; i<n ; i++)
    {
        sum = sum+arr[i];
    }
    int st1 = 0 ;
    int st2 = 0 ;
    vector<int>ans;
    for( int i=0 ; i<n ; i++)
    {
        st1 = st1 + arr[i];
        st2 = sum - st1;
        if(st2>st1)
        {
            ans.push_back(st2);
        }
        else
        {
            ans.push_back(st1);
        }
    }
    int anss = ans[0];
    for(int i = 0 ; i<ans.size() ; i++)
    {
        if(ans[i]<=ans[0])
        {
            anss=ans[i];
        }
    }
    cout<<anss<<endl;
};