#include<iostream>
#include<deque>
using namespace  std;
int main()
{
    deque<int>d(9);
    d.push_front(4);
    cout<<d.front();
}