/*
Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
              A
          B B
       C C C
   D D D D
E E E E E
*/
/*#include<iostream>
using namespace std;
int main()
{
    int row , col, n;
    cout<<"Enter the number of row:";
    cin>>n;
    for(row =1 ; row<=n; row++)
    {
        for(col=1 ; col=n- row; col++)
        {
            cout<<" ";
        }
        for(char name='A';name<name+row-1;name=name)
        {
            cout<<name;
        } 
        cout<<endl;
    }
}*/
/*#include<iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (row = 1; row <= n; row++) {
        // Print spaces before characters
        for (col = 1; col <= n - row; col++) {
            cout << " ";
        }

        char name = 'A';

        // Print characters in increasing order
        for (; name < 'A' + row; name++) {
            cout << name;
        }

        cout << endl;
    }

return 0;
}*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (n): ";
    cin >> n;

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        // Inner loop for spaces before characters
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // Print two spaces for formatting
        }

        // Inner loop for characters
        for (int k = 1; k <= i; k++) {
            cout << char('A' + i - 1)<<" ";

            // Print a space after the character except for the last one
            
        }
        cout<<endl;
        }

        // Move to the next line after each row
        cout << endl;
}
