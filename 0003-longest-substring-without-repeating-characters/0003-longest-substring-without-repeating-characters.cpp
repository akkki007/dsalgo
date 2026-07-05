class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256];
        memset(hash, -1, sizeof(hash));

        int maxLen = 0, n = s.length();
        int l = 0;

        for (int r = 0; r < n; r++) {
            unsigned char c = s[r];       // fix: avoid signed-char UB
            if (hash[c] >= l) {
                l = hash[c] + 1;
            }
            maxLen = max(maxLen, r - l + 1);
            hash[c] = r;
        }
        return maxLen;
    }
};