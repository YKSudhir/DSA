/*
First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like 
this.

            1
         2 1
       3 2 1
   4 3 2 1
5 4 3 2 1          
*/
/*#include<iostream>
using namespace std;
int main()
{
    int row , col,n;
    cout<<"Enter your row";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    {
        for(col=1;col<=n-row;col=col+1)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col=col+1)
        {
            cout<<row<<" ";
            row--;
        }
        cout<<endl;
    }
}*/
#include<iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (row = 1; row <= n; row++) {
        // Print spaces before numbers
        for (col = 1; col <= n - row; col++) {
            cout << "  ";
        }

        // Print numbers in decreasing order
        for (col = row; col >= 1; col--) {
            cout << col << " ";
        }

        cout << endl;
    }

    return 0;
}
