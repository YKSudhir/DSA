/*
Ticket Price Calculator: Create a program that asks the user for their age and checks if
 they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.
*/
/*#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age to get discount on the price";
    cin>> age;
    if(age<12 || age>65)
    {
        cout<<"You are able to get discount";
    }
    else if{
        cout<<"You are not able to get discount";
    }
}*/
#include <iostream>
using namespace std;
int main() {
    // Ask the user for their age
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Check if the age qualifies for a discount
    if (age < 12 || age > 65) {
        cout << "YES, you qualify for a discounted ticket price!" << std::endl;
    } else {
        cout << "NO, you do not qualify for a discounted ticket price." << std::endl;
    }

    return 0;
}
