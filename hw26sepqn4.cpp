/*Fourth Pattern:
      A B C D
      A B C
      A B
      A
*/
#include <iostream>
using namespace std;

int main() {
    int rows = 4; // Number of rows for the pattern

    for (int i = 0; i < rows; i++) {
        char alphabet = 'A'; // Starting alphabet 'A' for each row
        for (int j = 0; j < rows - i; j++) {
            cout << alphabet << " ";
            alphabet++; // Increment the alphabet for the next column
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
