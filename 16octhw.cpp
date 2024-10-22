// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the length of row:";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the element of row:";
//     for(int i=0 ; i<n; i++)
//     cin>>arr[i];
//     for( int i=0 ; i<n-1; i++)
//     {
//         for(int j=i+1; j<n ; j++)
//         {
//             if(arr[j]<arr[i]){
//             int temp = arr[i];
//             arr[i]=arr[j];
//             arr[j]=arr[i];
//         }
//     }
// for(int i=0 ; i<n ; i++)
// {
//     cout<<arr[i]<<" ";
// }
// return 0;
// }

// 1: Selection Sort Algorithm to sort the array of integers in decreasing order.
// 2: Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 
// 3: Selection Sort Algorithm to sort the array of char in ascending order.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Selection Sort Algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
