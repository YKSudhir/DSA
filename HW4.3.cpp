#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number (1-12): ";
    cin >> n;

    if (n >= 1 && n <= 12) {
        if (n == 1) {
            cout << "January" << endl;
        } else if (n == 2) {
            cout << "February" << endl;
        } else if (n == 3) {
            cout << "March" << endl;
        } else if (n == 4) {
            cout << "April" << endl;
        } else if (n == 5) {
            cout << "May" << endl;
        } else if (n == 6) {
            cout << "June" << endl;
        } else if (n == 7) {
            cout << "July" << endl;
        } else if (n == 8) {
            cout << "August" << endl;
        } else if (n == 9) {
            cout << "September" << endl;
        } else if (n == 10) {
            cout << "October" << endl;
        } else if (n == 11) {
            cout << "November" << endl;
        } else if (n == 12) {
            cout << "December" << endl;
        }
    } else {
        cout << "Invalid input. Please enter a number between 1 and 12." << endl;
    }

    return 0;
}




