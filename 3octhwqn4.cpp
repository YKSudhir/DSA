//Write a program to convert decimal numbers to Octal numbers.
#include<iostream>
using namespace std;
int main()
{
    int ans=0,rem,num,mul=1;
    cout<<"Enter your decimal number(num) which you want to convert into octal:";
    cin>>num;
    num=num;
    while(num>0)
    {
        rem=num%8;
        num=num/8;

        ans=rem*mul+ans;
        mul=mul*10;
        
    }
    cout<<"Octal number:"<<ans;
    return 0;
}
/*#include<iostream>
using namespace std;

int main() {
    int ans = 0, rem, num, mul = 1;

    // Prompt the user to enter a decimal number
    cout << "Enter your decimal number (num) which you want to convert into octal: ";
    cin >> num;

    // Loop to perform decimal to octal conversion
    while (num > 0) {
        rem = num % 8;
        num = num / 8

        ans = rem * mul + ans;
        mul = mul * 10;
    }

    // Display the octal number
    cout << "Octal number: " << ans;

    return 0;
}
*/