// #include<iostream>
// using namespace std;
// int search(int &arr, int start ,int end,int X)
// {
//     if(start>end)
//     return 0;
//     int mid=start+(end-start)/2;
//     if(arr[mid]==X)
//     return 1;
//     else if(arr[mid]<X)
//     {
//         return(arr,start=mid+1,end,X);
//     }
//     else
//     {
//         return(arr,start,end=mid-1,X);
//     }
    
    
//     }

// int main()
// {   
//     int n;
//     cout<<"Enter your array size:"<<endl;
//     cin>> n ;

//     int arr[n];
    
  
//     cout<<"Enter your element of your array:";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i] ;
//     }
//     int X;
//     cout<<"Enter your Element:";
//     cin>>X;
//     int c=search(arr,0,n-1);
//     cout<<c;
//     return 0;
// }

#include<iostream>
using namespace std;

int search(int arr[], int start, int end, int X)
{
    if (start > end)
        return 0;

    int mid = start + (end - start) / 2;

    if (arr[mid] == X)
        return 1;
    else if (arr[mid] < X)
    {
        return search(arr, mid + 1, end, X);
    }
    else
    {
        return search(arr, start, mid - 1, X);
    }
}

int main()
{
    int n;
    cout << "Enter your array size:" << endl;
    cin >> n;

    int arr[n];

    cout << "Enter your elements of your array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int X;
    cout << "Enter your Element:";
    cin >> X;

    int c = search(arr, 0, n - 1, X);

    if (c == 1)
        cout << "Element found in the array.";
    else
        cout << "Element not found in the array.";

    return 0;
}
