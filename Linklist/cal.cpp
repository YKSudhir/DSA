#include<iostream>
#include<vector>
#include<cmath> // Include the cmath header for pow function
using namespace std;

int main()
{
    vector<int> arr;
    for(float x = pow(-2,10); x <= pow(2,10) ; x++)
    {
        if(x * (x + 2) * (x + 4) * (x + 6) == 9)
        {
            arr.push_back(x);
        }
    }

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
