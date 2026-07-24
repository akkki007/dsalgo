class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            res[i] = nums[i] * nums[i];
        }
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int pos = n-1;
        
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                res[pos] = nums[left]*nums[left];
                left++;
            }else{
                res[pos] = nums[right]*nums[right];
                right--;
            }
        pos--;
        }


        
        return res;
    }
};