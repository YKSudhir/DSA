//Pair in C++
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<string , int>p;
    // two method to insert data
    // p = make_pair("Sudhir" , 23);
    p.first = "sudhir";
    p.second = 23;
    cout<<p.first<<" "<<p.second<<endl;
}
