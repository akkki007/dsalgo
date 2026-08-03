class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int currSum = nums[0];
        int res = currSum;

        for(int i=1;i<nums.size();i++){
            if(nums[i-1] < nums[i]){
                currSum += nums[i];
            }else{
                currSum = nums[i];
            }
            res = max(res,currSum);
        }

        return res;
    }
};