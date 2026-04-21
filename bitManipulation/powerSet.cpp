#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3};
    int n = nums.size();
    int subset = 1 << n;
    vector<vector<int>> ans;
    for (int i = 0; i < subset; i++)
    {
        vector<int> mediater;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                mediater.push_back(nums[j]);
            }
        }
        ans.push_back(mediater);
    }
    for (const auto &row : ans)
    {
        cout << "[";
        for (int val : row)
        {
            cout << val << "";
        }
        cout << "]\n";
    }

    return 0;
}