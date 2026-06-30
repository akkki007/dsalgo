// Single Element in a Sorted Array
/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int start = 0, end = nums.size() - 1;
        bool isEvenElems = true;
        cout << nums.size() -1 << endl;
        if ((nums.size() - 1) % 2 != 0)
        {
            isEvenElems = false;
        }
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1])
            {
                return nums[mid];
            }
            if (isEvenElems)
            {
                if (nums[mid] == nums[mid + 1])
                {
                    // right part to search
                    start = mid + 1;
                }
                if (nums[mid] == nums[mid - 1])
                {
                    end = mid - 1;
                }
            }
            else
            {
                if (nums[mid] == nums[mid + 1])
                {
                    // right part to search
                    end = mid - 1;
                }
                if (nums[mid] == nums[mid - 1])
                {
                    start = mid + 1;
                }
            }
        }
        return nums[end];
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    cout << sol.singleNonDuplicate(nums) << endl;
}