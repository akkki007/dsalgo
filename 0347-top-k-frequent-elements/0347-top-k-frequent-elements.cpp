class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int num : nums) freq[num]++;

        // bucket[i] holds all numbers that appear exactly i times
        // max possible frequency is n, so we need n+1 buckets (index 0..n)
        int n = nums.size();
        vector<vector<int>> bucket(n + 1);
        for(auto& [num, count] : freq) {
            bucket[count].push_back(num);
        }

        // walk from highest frequency down, collecting until we have k
        vector<int> ans;
        for(int i = n; i >= 1 && ans.size() < k; i--) {
            for(int num : bucket[i]) {
                ans.push_back(num);
                if(ans.size() == k) break;
            }
        }
        return ans;
    }
};