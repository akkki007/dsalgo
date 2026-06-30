#include <bits/stdc++.h>
using namespace std;
/*
    roup anagrams(49) : Given an array of strings strs, group the anagrams together. You can return the answer in any order.

    Input: strs = ["eat","tea","tan","ate","nat","bat"]

    Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

    Explanation:

    There is no string in strs that can be rearranged to form "bat".
    The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
    The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.

    Time complexity: O(m∗nlogn)
    Space complexity: O(mn)
*/

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> validAnagrams;
        validAnagrams.reserve(strs.size());

        // auto is basically we tell the compiler that figure out the datatype yourself
        for (const auto &s : strs)
        {
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            validAnagrams[sorted].push_back(s);
        }

        vector<vector<string>> result;
        for (auto &pair : validAnagrams)
        {
            result.push_back(pair.second);
        }
        return result;
    }
};