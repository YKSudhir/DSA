// // 3: Find the index of a specific element in an array,
// //   the user and then implement it.
// // //if the element is nor present,
// //   print -1. Ask the size of the array from 
 
// #include<iostream>
// using namespace std;
// int main()
// {
// int  num,n,size,arr[size];
// cout<<"Enter the size of your array:"<<endl;
// cin>>size;
// cout<<"Enter the element of array:"<<endl;
// for(int i=0; i<size; i++)
// {
//     cin>>arr[i];
// }
// cout<<"Enter your number to know its index:"<<endl;
// cin>>n;
// for(int i=0 ; i<size; i++)
// {
//     if(n==arr[i])
//      cout<<"The index of your number is:"<<i<<endl;
// }
// cout<<"Enter the which you want to know that it present in array or not:"<<endl;
// cin>>num;
// for(int i=0 ; i<size; i++)
// {
//     if(num==arr[i])
//     {
//         cout<<"Your entered number is present in array."<<endl;
//     }
//     else{
//         cout<<"Your entered number is not present in array."<<endl;
//     }
// }

// }
#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of your array: " << endl;
    cin >> size;

    int arr[size]; // Declare the array after obtaining the size

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int n;
    cout << "Enter your number to know its index: " << endl;
    cin >> n;

    int index = -1; // Initialize index to -1 (not found)
    
    for (int i = 0; i < size; i++)
    {
        if (n == arr[i])
        {
            index = i; // Update index if the element is found
            break; // Exit the loop since we found the element
        }
    }

    if (index != -1)
    {
        cout << "The index of your number is: " << index << endl;
    }
    else
    {
        cout << "Your entered number is not present in the array." << endl;
    }

    return 0;
}
