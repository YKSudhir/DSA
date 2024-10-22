// /*Day 43/180 Introduction to 2D array in c++
// 1: Print sum of each column in 2D array.
// 2: Given 2 matrices A and B, Print A-B.
// 3: Given a matrix of size n*n, Print sum of diagonal element.
//  Ex:   1 2 3
//           4 5 6
//           7 8 9

// Its answer: 1+5+9 , 3+5+7, So the total sum will be 1+5+9+3+5+7 = 30. Here we can see that 5 is included 2 times, so we should include it only 1 time so the final answer will be, 30-5 = 25.  So the final answer will be 25.

// 4: What is the column major order? 
// 5: Largest Element: Find and print the largest element in the 2D array.
// 6: Smallest Element: Find and print the smallest element in the 2D arrays. 
// */
// #include<iostream>
// using namespace std;
// int main()
// {    int m ,n ;
//     int arr[4][5] ;
   
//     cout<<"Enter the element of 2D array:";
//     for(int row=0 ; row<4 ; row++)
//     {
//         for(int col =0 ; col<5; col++)
//         {
//             cin>>arr[row][col];
//         }
//     }
    
// for(int col=0 ; col<5 ; col++){
//     int sum;
//     for ( int row=0 ; row<4 ; row++)
//     {
//         int sum= sum+arr[row][col];
//     }
//     cout<<"Sum of"<<col<<"col is:"<<sum<<endl;
// }
// return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int m, n;
    int arr[2][2];

    cout << "Enter the elements of the 2D array:";

    // Input elements into the array
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 2; col++) {
            cin >> arr[row][col];
        }
    }

    // Calculate and display the sum of each column
    for (int col = 0; col < 2; col++) {
        int sum = 0; // Initialize sum to 0 for each column
        for (int row = 0; row < 2; row++) {
            sum += arr[row][col];
        }
        cout << "Sum of column " << col << " is: " << sum << endl;
    }

    return 0;
}
