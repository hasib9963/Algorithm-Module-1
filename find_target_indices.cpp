#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        vector<int> result;

        // Sort nums in non-decreasing order
        sort(nums.begin(), nums.end());

        // Find target indices in sorted nums
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == target)
            {
                result.push_back(i);
            }
        }

        return result;
    }
};