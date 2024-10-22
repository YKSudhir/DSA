//Write a program to convert decimal numbers to binary numbers using a for loop.
/*#include<iostream>
using namespace std;
int main()
{
    int ans,num,sum=0,mul=1,rem;
    cout<<"Enter you decimal number which you want to convert into binary:";
    cin>>num;
    for(; num>0; num=num/2)

    {    rem=num%2;
         ans=rem*mul+ans;
         mul=mul*10;

    }
    cout<<ans<<" ";
    return 0;
}*/
#include<iostream>
using namespace std;

int main()
{
    int ans = 0, num, mul = 1, rem;
    cout << "Enter your decimal number which you want to convert into binary: ";
    cin >> num;

    for(; num > 0; num = num / 2)
    {
        rem = num % 2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }

    cout << "Binary equivalent: " << ans << endl;
    return 0;
}
