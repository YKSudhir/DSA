#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the range of array: ";
    cin >> n;
    int arr[n];

    

    cout << "Enter the elements of the array in increasing form: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter your target number: ";
    int target;
    cin >> target;
    int start=0,end=n-1,ans=-1,mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==target){
            ans=mid;
            break;
        }
        else if(arr[mid]<target)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(ans==-1){
        cout<<"Your target number is invalid.";
    }
    else{
        cout<<"your target number preset at this index:"<<ans;
    }
    return 0;
    }