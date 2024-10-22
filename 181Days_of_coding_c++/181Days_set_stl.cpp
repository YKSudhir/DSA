// Set in C+=
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    for(auto it=s.begin() ; it!=s.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    set<int , greater<int> >s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    for(auto it=s1.begin() ; it!=s1.end() ; it++)
    {
        cout<<*it<<" ";
    }
    if(s.find(10)!=s.end())
    {
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
    s.erase(20);
    s.count(30);
}