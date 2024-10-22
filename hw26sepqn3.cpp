/*
Third Pattern:
           10
       10 11
       10 11 12
       10 11 12 13
       10 11 12 13 14
       10 11 12 13 14 15
       ...................n
*/
/*#include<iostream>
using namespace std;
int main()
{
int row,col,n;
cout<<"Enter your col to print your patter:";
cin>>n;
for(row=1;row<=n;row=row+1)
{
    for(col=10;col>=(10*n-1);col=col+1)
    {
        cout<<col<<" ";
    }
    cout<<endl;
}
}*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for the pattern: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        int num = 10; // Initialize the number to start from 10
        for (int col = 1; col <= row; col++) {
            cout << num << " ";
            num++; // Increment the number for the next column
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
