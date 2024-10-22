#include<iostream>
using namespace std;
    int cube(int n){
        int cub=n*n*n;
        return cub;
        }
int main(){
    int cub,a;
    cout<<"Enter your number which you want to cube:";
    cin>>a;
    cout<<"Cube of your number is:"<<cube(a);
    }
