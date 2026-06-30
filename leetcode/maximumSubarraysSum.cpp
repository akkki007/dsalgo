#include <bits/stdc++.h>
using namespace std;

// Given an integer array nums, find the subarray with the largest sum, and return its sum.

int maxSubArray(vector<int> &nums)
{
    int maxSum = INT_MIN;
    // first loop will be for start
    for (int st = 0; st < nums.size(); st++)
    {
        // now the for loop of end
        int currSum = 0;
        for (int end = st; end < nums.size(); end++)
        {
            currSum += nums[end];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

int main(){

    vector<int> nums = {-1};
    cout << maxSubArray(nums);

}