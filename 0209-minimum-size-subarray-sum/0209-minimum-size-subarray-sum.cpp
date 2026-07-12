class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX, l = 0, total = 0;

        for (int r = 0; r < nums.size(); r++) {
            total += nums[r];

            while (total >= target) {
                minLen = min(minLen, r - l + 1);
                total -= nums[l];
                l += 1;
            }
        }

        return (minLen == INT_MAX) ? 0 : minLen;
    }
};