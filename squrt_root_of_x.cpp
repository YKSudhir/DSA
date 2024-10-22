//square root of x
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number:";
    cin>>n;
    int start=1,end=n,mid;
    while(start<=end){
        mid=(start+end)/2;
        if(mid*mid==n){
            cout<<"The square root of the number:"<<mid; 
            break;
        }
        else if(mid*mid<n){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;
}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter your number: ";
//     cin >> n;
//     int start = 1, end = n, mid, result = 0; // Initialize 'result' to store the square root

//     while (start <= end)
//     {
//         mid = start + (end - start) / 2; // Avoid potential integer overflow

//         if (mid * mid == n)
//         {
//             result = mid;
//             break; // Square root found, exit the loop
//         }
//         else if (mid * mid < n)
//         {
//             start = mid + 1;
//             result = mid; // Update 'result' when mid*mid is less than n
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }

//     cout << "The square root of the number: " << result << endl;
//     return 0;
// }
