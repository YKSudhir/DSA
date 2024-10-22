// //: An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;
// #include<iostream>
// using namespace std;
// int Binarysearch( int arr[] , int n , int key){
// int start = 0; 
// int end=n-1;
// int mid;
// while(arr[start]<arr[end])
// {
// mid=(start+end)/2;
// if(arr[mid]==key)
// return 1;
// elseif(arr[mid]<key){
//     end=mid-1;
//     else{
//         start=mid+1;
//     }

// }
// }
// int main()
// {
//     int n;
//     cout<<"Enter the range:";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the element of array:";
//     for(int i =0 ; i<n-1; i++)
//     cin>>arr[i];
//     int key;
//     cout<<"Enter the key number:";
//     cin>>key;
//     cout<<Binarysearch( arr[n], n , key);
//     return 0;
// }
#include<iostream>
using namespace std;

int Binarysearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;  // Key not found
}

int main() {
    int n;
    cout << "Enter the range:";
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements of the array:";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int key;
    cout << "Enter the key number:";
    cin >> key;
    
    int result = Binarysearch(arr, n, key);
    if (result != -1)
        cout << "Key found at index " << result;
    else
        cout << "Key not found";
    
    return 0;
}
