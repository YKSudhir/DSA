// // #include<iostream>
// // using namespace std;

// // void reverse(int arr[],int cons,  int end)
// // {
// //      int c = arr[end];
// //      arr[end] = arr[end-1];
// //      if( end == 0)
// //      {
// //         arr[0]=c;
// //         return;
// //      }
// //      reverse(arr, --end);
// // }

// // int main()
// // {
// //     int n;
// //     cout << "Enter your array size:" << endl;
// //     cin >> n;

// //     int arr[n];

// //     cout << "Enter your elements of your array:";
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> arr[i];
// //     }

// //     reverse(arr,n-1, n - 1);

// //     cout << "Reversed array:" << endl;
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << arr[i] << endl;
// //     }

// //     return 0;
// // }
// #include<iostream>
// using namespace std;

// void rotateRight(int arr[], int start, int end)
// {
//     if (start >= end)
//         return;

//     int temp = arr[end];
//     for (int i = end; i > start; i--)
//     {
//         arr[i] = arr[i - 1];
//     }

//     arr[start] = temp;

//     rotateRight(arr, start, end - 1);
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

//     rotateRight(arr, 0, n - 1);

//     cout << "Rotated array to the right by 1 position:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }

//     return 0;
// }
#include<iostream>
using namespace std;

void rotateRight(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int temp = arr[end];
    for (int i = end; i > start; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[start + 1] = temp;

    rotateRight(arr, start, end - 1);
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

    rotateRight(arr, 0, n - 1);

    cout << "Rotated array to the right by 1 position:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

