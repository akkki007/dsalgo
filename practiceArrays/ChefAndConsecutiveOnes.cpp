#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxCount = 0;
    int count = 0;

    for (int num : nums) {
        if (num == 1) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }

    return maxCount;
}

int main(){
    vector<int> nums = {1, 1, 1, 1, 1, 1};
    cout << findMaxConsecutiveOnes(nums) << endl;
    return 0;
}