/*
 Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.*/
 #include<iostream>
 using namespace std;
 int main()
 {
    int a,b,c;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Enter the value of c:";
    cin>>c;
    if( a>b || a>c)
    cout<<"a is greater than a or b.";
    else
    cout<<"a is not either greater than a or b.";
 }