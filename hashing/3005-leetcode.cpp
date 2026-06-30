// Count elements with maximum frequency
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        if (nums.empty())
            return 0;
            
        unordered_map<int, int> numsFrequency;
        numsFrequency.reserve(nums.size());

        for (int num : nums)
        {
            numsFrequency[num]++;
        }

        int maxFreq = 0;
        int ans = 0;

        for (auto &[num, count] : numsFrequency) // in this way we can iterate through both the values in a unordered map
        { 
            if (count > maxFreq)
            { // if the frequency is greater then assign it to maxfreq
                maxFreq = count;
                ans = count;
            }
            else if (count == maxFreq)
            {
                ans += maxFreq; // if the frequencies match we add it into answer
            }
        }
        return ans;
    }
};