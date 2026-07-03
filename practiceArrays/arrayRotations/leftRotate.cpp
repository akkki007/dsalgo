#include <bits/stdc++.h>
using namespace std;

// base approach: shift the whole array left by one, k times -> O(n*k), this times out for large k
vector<int> leftRotateBase(vector<int> &arr, int k)
{
    int n = arr.size();

    k %= n; // after every n rotations the array becomes the same again

    while (k--)
    {
        int temp = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            swap(arr[i], arr[i + 1]);
        }
        arr[n - 1] = temp;
    }
    return arr;
}

// optimized approach: reverse the first k elements, then reverse the rest, then reverse the full array -> O(n)
vector<int> leftRotateOptimized(vector<int> &nums, int k)
{
    int n = nums.size();
    if (n == 0)
        return nums;

    k %= n;
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());
    return nums;
}

int main()
{
    vector<int> baseNums = {1, 2, 3, 4, 5, 6, 7};
    vector<int> baseRes = leftRotateBase(baseNums, 3);
    for (int num : baseRes)
    {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    vector<int> res = leftRotateOptimized(nums, 3);
    for (int num : res)
    {
        cout << num << " ";
    }
}
