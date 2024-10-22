#include<iostream>
#include<vector>
using namespace std;
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        vector<int>ans;
        for(int i = 0 ; i<=(nums.size()-k) ; i++)
        {
            int max = nums[i];
            for(int j = i ; j<i+k ; j++)
            {
                if(max<nums[j])
                {
                    max = nums[j];
                }
            }
            ans.push_back(max);
        }
        return ans;
    }
int main()
{
    int k;
    cout<<"Enter the val of k\n";
    cin>>k;
    vector<int> nums = {4,3,7,5,2,3,1,2,8,7};
    vector<int> ans;

    ans = maxSlidingWindow(nums, k);
    for(int i=0 ; i<ans.size() ; i++)
    {
        cout<<ans[i]<<" ";
    }
}