/*
Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

             5
         5 4
       5 4 3
   5 4 3 2 
5 4 3 2 1
*/
/*#include<iostream>
using namespace std;
int main(){
    int n, row ,col;
    cout<<"Enter the number of rows(n):";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1 ; col=col+n-row; col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<n<<" ";
            n--;
        }
        cout<<endl;a
    }

}*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (n): ";
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // Two spaces for formatting
        }

        // Print numbers in descending order
        for (int k = n; k >= n - i + 1; k--) {
            cout << k << " ";
        }

        cout << endl;
    }

    return 0;
}
