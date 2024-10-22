/*      Day 18/180 Function in C++
1: Find the cube of a number using Function. 
2: Reverse a number n using Function, Constraints: -5000<=n<=5000
3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.
4: Swap 2 numbers a, b without using extra variables. Range of 
-10000<=a,b<=100000. 

5: Print “Hello Coder Army” n times using Function.
#include<iostream>
using namespace std;

void printHello(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Hello Coder Army" << endl;
    }
}

int main()
{
    int num;
    cout << "Enter the number of times you want to print the string: ";
    cin >> num;
    printHello(num);
    return 0;
}

*/