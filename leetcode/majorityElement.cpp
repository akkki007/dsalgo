#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    // this is the easiest and simplest approach with sorting the array 
    sort(nums.begin(),nums.end()); // [1,1,1,1,2,2,2,2]
    int n = nums.size(); // 8
    return nums[n/2]; // 8 / 2 = 3 i.e nums[4] = 2
}

int main()
{
    vector<int> nums = {2,2,1,1,1,1,2,2};
    cout << majorityElement(nums) << endl;
}