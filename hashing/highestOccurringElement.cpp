#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {

        int hash[13] = {0};
        int answer = 0;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]] += 1;
        }

        for(int i=0;i<13;i++){
            int maxFreq = 0;
            if(hash[i]>maxFreq){
                maxFreq = hash[i];
                answer = i;
            }
            else if(hash[i] == maxFreq && hash[i] != 0){
                answer = min(answer, i);
            }
        }

        return answer;
        

    }
};


int main(){
    Solution sol;
    vector<int> nums = {4,4,5,5,6,7,7};
    cout << sol.mostFrequentElement(nums) << endl;
    return 0;
}