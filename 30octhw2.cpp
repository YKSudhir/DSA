#include <iostream>
using namespace std;

int main() {
    int arr1[2][2];
     int arr2[2][2];
      int arr3[2][2];

    cout << "Enter the elements of the 2D array1:";

    // Input elements into the array
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 2; col++) {
            cin >> arr1[row][col];
        }
    }
    cout << "Enter the elements of the 2D array2:";

    // Input elements into the array
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 2; col++) {
            cin >> arr2[row][col];
        }
    }
   for( int row =0 ;row<2 ; row++)
   {
    for( int col= 0 ; col<2; col++)
    {
        cout<<(arr3[row][col]=(arr1[row][col]- arr2[row][col]))<<" ";
    }
   }



    }