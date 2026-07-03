#include <bits/stdc++.h>
using namespace std;

// base approach: shift the whole array right by one, k times -> O(n*k), this times out for large k
vector<int> rightRotateBase(vector<int> &arr, int k)
{
    int n = arr.size();

    k %= n; // after every n rotations the array becomes the same again

    while (k--)
    {
        if (n == 0)
        {
            n = arr.size();
        }
        int temp = arr[n - 1];
        for (int i = arr.size() - 1; i > 0; i--)
        {
            swap(arr[i], arr[i - 1]);
        }
        arr[0] = temp;
    }
    return arr;
}

// optimized approach: reverse the full array, then reverse the first k elements, then reverse the rest -> O(n)
vector<int> rightRotateOptimized(vector<int> &nums, int k)
{
    int n = nums.size();
    if (n == 0)
        return nums;

    k %= n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());

    return nums;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    vector<int> res = rightRotateOptimized(nums, 3);
    for (int num : res)
    {
        cout << num << " ";
    }
}
