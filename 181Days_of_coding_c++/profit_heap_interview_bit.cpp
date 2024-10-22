/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
}
int solve(int* A, int n1, int B) {
    priority_queue<int>p;
    for( int i=0 ; i<n1 ; i++)
    p.push(A[i]);
    
    int profit=0;
    while(B&&(!p.empty()))
    {
        profit+=p.top();
        if(p.top()-1)
        p.push(p.top()-1);
        
        p.pop();
        B--;
    }
    return profit;
}
