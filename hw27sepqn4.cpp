/*
Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
            E
          E D
       E D C
   E D C B
E D C B A
      */
    /* #include<iostream>
     using namespace std;
    int main()
    {
        int row, col,n;
        cout<<"Enter the number of rows(n):";
        cin>>n;
        for(row =1 ; row<=n ; row++)
        {
            for(col=1 ; col<=n-row;col++)
            {
                cout<<" ";
            }
            for
        }
    }*/
    #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // Two spaces for formatting
        }

        // Print characters in descending order
        char ch = 'E';
        for (int j = 1; j <= i; j++) {
            cout << ch;
            if (j < i) {
                cout << " ";
            }
            ch--;
        }

        cout << endl;
    }

    return 0;
}
