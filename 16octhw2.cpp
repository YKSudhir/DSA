// // 2: Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 
// // 2: Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 
// // 3: Selection Sort Algorithm to sort the array of char in ascending order.
// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int n;
// //     cout << "Enter the length of the array: ";
// //     cin >> n;
// //     int arr[n];
// //     cout << "Enter the elements of the array: ";
// //     for (int i = 0; i < n; i++)
// //         cin >> arr[i];

// //     // Selection Sort Algorithm
// //     for (int i = 0; i < n - 1; i++) {
// //         for (int j = i + 1; j < n; j++) {
// //             if (arr[j] >arr[i]) {
// //                 int temp = arr[j];
// //                 arr[j] = arr[i];
// //                 arr[i] = temp;
// //             }
// //         }
// //     }

// //     cout << "Sorted array in ascending order: ";
// //     for (int i = 0; i < n; i++) {
// //         cout << arr[i] << " ";
// //     }

// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the length of the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     // Selection Sort Algorithm
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] >arr[i]) {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }

//     cout << "Sorted array in ascending order: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

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

    // Selection Sort Algorithm for ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {  // Change the condition to sort in ascending order
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}















































