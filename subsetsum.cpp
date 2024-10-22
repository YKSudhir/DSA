#include <iostream>
#include <vector>
using namespace std;

void subsetsum_with_arr(vector<int>& arr, vector<vector<int>>& ans, int N, int index, int sum, vector<int>& temp)
{
    if (index == N)
    {
        // Print the subset sum and corresponding subset
        cout << "Subset Sum: " << sum << ", Subset: ";
        for ( int i = 0; i < temp.size(); i++)//++i
        {
            cout << temp[i];
            if (i < temp.size() - 1) {
                cout << " + ";
            }
        }
        cout << endl;

    
        return;
    }

    // element not included
    subsetsum_with_arr(arr, ans, N, index + 1, sum, temp);

    // element included
    temp.push_back(arr[index]);
    subsetsum_with_arr(arr, ans, N, index + 1, sum + arr[index], temp);
    temp.pop_back();
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans; // to store subsets
    int N = arr.size();

    vector<int> temp; // temporary vector to store subsets
    subsetsum_with_arr(arr, ans, N, 0, 0, temp);

    return 0;
}
