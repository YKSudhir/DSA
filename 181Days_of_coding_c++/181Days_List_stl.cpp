// List in C++
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_front(5);
    for (auto it=l.begin() ; it!=l.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for (auto it=l.rbegin() ; it!=l.rend() ; it++)
    {
        cout<<*it<<" ";
    }
    // cout<<l.front()<<" "<<l.back()<<endl;
}