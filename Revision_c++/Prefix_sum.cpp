#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int sum = 0;
    vector<int>ans={1,2,3,4,5};


    for( int i= 0 ; i<ans.size() ; i++)
    {
        sum+=ans[i];
        ans[i] = sum;
    }
    for(int i = 0 ; i<ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
}