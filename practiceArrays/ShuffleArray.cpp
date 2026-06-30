#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2 * n);

        int st = 0, end = n + 1;

        while (st == n && end == 2 * n) {
            cout << nums[st];
            ans.push_back(nums[st]);
            ans.push_back(nums[end]);
            st++;
            end++;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;

    vector<int> result = obj.shuffle(nums, n);

    cout << "Shuffled array: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}