// Map in C++
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int , int>m;
    m.insert(make_pair(20 , 30));
    m.insert(make_pair(200 , 300));
    m.insert(make_pair(2000 , 3000));
    m.insert(make_pair(20000, 30000));
    for( auto it=m.begin() ; it!=m.end() ;it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    if(m.count(20))
    cout<<"Yes!, 20 key is presnet m[20] = "<<m[20]<<endl;
    m.erase(200);
}