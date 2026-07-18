class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // next free slot for a keeper
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};