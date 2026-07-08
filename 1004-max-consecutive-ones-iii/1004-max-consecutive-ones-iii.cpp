class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen = 0,l=0,r=0,zeros=0;

        while(r<nums.size()){
            // check if the rth element is zero and increase
            if(nums[r]==0){
                zeros++;
            }
            // if we arrive at a point where the zeros get our of k
            while(zeros>k){
                if(nums[l]==0){
                    zeros--;
                }
                l++;
            }
            // now our main condition of calculating the length of that substring
            if(zeros<=k){
                int len = r - l + 1;
                maxLen = max(maxLen,len);
            }
            r++;
        }
        return maxLen;
    }
};