// // //cube root of number
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cout<<"Enter your number:";
// //     cin>>n;
// //     int start=1,end=n,mid;
// //     while(start<=end){
// //         mid=(start+end)/2;
// //         if(mid*mid*mid==n){
// //             cout<<"The cube root of the number:"<<mid; 
// //             break;
// //         }
// //         else if(mid*mid*mid<n){
// //             start=mid+1;
// //         }
// //         else{
// //             end=mid-1;
// //         }
// //     }
// //     return 0;
// // }
// // Cube root of a number
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter your number: ";
//     cin >> n;
//     double start = 0, end = n, mid, result;

//     // Define a small value for precision
//     double epsilon = 0.000001;

//     while (end - start > epsilon) {
//         mid = (start + end) / 2;
//         double cube = mid * mid * mid;

//         if (cube == n) {
//             result = mid;
//             break;
//         }
//         else if (cube < n) {
//             start = mid;
//         }
//         else {
//             end = mid;
//         }
//     }

//     cout << "The cube root of the number: " << result << endl;
//     return 0;
// }



//cube root of number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;
    int start = 1, end = n, mid;

    while (start <= end) {
        mid = (start + end) / 2;
        long long cube = mid * mid * mid; // Ensure using a long long to avoid overflow

        if (cube == n) {
            cout << "The cube root of the number: " << mid;
            break;
        }
        else if (cube < n) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return 0;
}
