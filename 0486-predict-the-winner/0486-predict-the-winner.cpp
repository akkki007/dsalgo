class Solution {
public:
    int solve(vector<int>& nums, int l, int r) {
        // returns best score-difference (current player - other player)
        if (l == r) return nums[l];          // only one choice
        int pickLeft  = nums[l] - solve(nums, l + 1, r);
        int pickRight = nums[r] - solve(nums, l, r - 1);
        return max(pickLeft, pickRight);
    }

    bool predictTheWinner(vector<int>& nums) {
        return solve(nums, 0, nums.size() - 1) >= 0;
    }
};