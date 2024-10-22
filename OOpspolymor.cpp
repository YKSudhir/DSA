#include<iostream>
using namespace std;
class Area
{
    public:
    int calculatearea(int r)
    {
        return 3.14*r*r;
    }
    int calculatearea( int l , int b)
    {
        return l*b;
    }
};
int main()
{
    Area A1,A2;
    cout<<A1.calculatearea(4)<<endl;
    cout<<A2.calculatearea(2,4)<<endl;

}