// //first and last position in sorted array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the range of array:";
//     cin>>n;
//     int arr[n];
//     int target;
//     cout<<"Enter your target number:";
//     cin>>target;
//     cout<<"Enter the element of array in increasing form:";
//     for( int i=0 ; i<n ; i++)
//     {
//         cin>>arr[i];
//     }
//     int start=0, end=n-1,first=-1, last=-1,mid;
//     while(start<=end)
//     {
//         mid=(start+end)/2;
//         if(arr[mid]==target){
            
//         }
//         else if(arr[mid]<target)
//         start=mid+1;
//     }
      
// }
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the range of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter your target number: ";
    int target;
    cin >> target;

    cout << "Enter the elements of the array in increasing form: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0, end = n - 1, first = -1, last = -1, mid;

    // Perform binary search to find the first occurrence
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;  // Continue searching in the left half
        }
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    start = 0;
    end = n - 1;

    // Perform binary search to find the last occurrence
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;  // Continue searching in the right half
        }
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    // Check if the target element was found
    if (first != -1 && last != -1)
    {
        cout << "First occurrence: " << first << " Last occurrence: " << last << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}












