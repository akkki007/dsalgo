class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        // we are using unordered set so as to avoid the duplicate numbers in
        // line
        unordered_set<int> st(nums.begin(), nums.end());

        int mn = ranges::min(nums);
        int mx = ranges::max(nums);

        vector<int> ans;

        for (int i = mn + 1; i < mx; i++) {
            if (!st.contains(i)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};