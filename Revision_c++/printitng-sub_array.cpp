// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // int  main()
// // {
// //     vector<int>arr ={ 1,2,3,4,5};
// //     for(int i=0 ; i<arr.size() ; i++)
// //     {
// //         for( int  j= 0 ; j<=i ; j++)
// //         {
// //             cout<<arr[j]<<" ";
// //         }
// //         cout<<endl;
// //     }

// // }
// #include <iostream>
// #include <vector>

// using namespace std;

// void printSubarrays(const vector<int>& arr) {
//     int n = arr.size();
//     // Outer loop for the starting index of subarray
//     for (int i = 0; i < n; i++) {
//         // Inner loop for the ending index of subarray
//         for (int j = i; j < n; j++) {
//             // Print the subarray from start to end
//             for (int k = i; k <= j; k++) {
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//     }
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4};
//     cout << "All subarrays of the vector:" << endl;
//     printSubarrays(arr);
//     return 0;
// }
// // 1
// // 1 2
// // 1 2 3
// // 1 2 3 4
// // 2
// // 2 3
// // 2 3 4
// // 3
// // 3 4
// 4
#include <iostream>
#include <vector>

using namespace std;

void printSubarrays(const vector<int>& arr, int start, int end) {
    if (start > end)
        return;

    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    printSubarrays(arr, start + 1, end); // Recursive call for next starting index
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    cout << "All subarrays of the vector:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        printSubarrays(arr, i, arr.size() - 1);
    }
    return 0;
}
