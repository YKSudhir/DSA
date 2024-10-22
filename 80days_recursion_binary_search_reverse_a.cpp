// #include<iostream>
// using namespace std;
// int reverse(int &arr,int start, int end)
// {
//     if(start > end)
//     return reverse ;
//     int c = arr[start];
//     arr[start] = arr[end];
//     arr[end] = c;
//     reverse(arr , ++start, --end);
// }
// int main()
// {
//     int n;
//     cout << "Enter your array size:" << endl;
//     cin >> n;

//     int arr[n];

//     cout << "Enter your elements of your array:";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
// reverse(arr,0,n-1);
// for(int i =0 ; i< n ; i++)
// {
//     cout<<arr[i]<<endl;
// }
// return 0;
  
// }
#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverse(arr, ++start, --end);
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

    reverse(arr, 0, n - 1);

    cout << "Reversed array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

