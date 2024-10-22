/*
Fourth Pattern:
F G H I J K  
F G H I J K
F G H I J K
F G H I J K
F G H I J K
*/
#include<iostream>
using namespace std;
int main()
{ 
    for(int row=1; row <= 5; row++)
    {
        for( char col='F'; col <= 'K';col++)
        {
        cout<<col<<" ";
        }
        cout<<endl;
    }
 return 0; 
 }  /*

#include<iostream>
using namespace std;
int main()
{ 
    for(int row = 1; row <= 5; row++)
    {
        for(char col = 'F'; col <= 'K'; col++)
        {
            cout << col << " "; // Added a space here
        }
        cout << endl;
    }
    return 0; // Don't forget to return 0 at the end.
}
*/