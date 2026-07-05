class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0,n=s.length();
        int hash[256];
        for(int i=0;i<256;i++){
            hash[i] = -1;
        }
        int l = 0, r = 0;
        while(r<n){
            if(hash[s[r]]!=-1){ // has this character appeared before,anywhere in the string ?
                if(hash[s[r]]>=l){ // okay it appears but is that old occurence still inside my current window ? if yes then update the left pointer
                    l = hash[s[r]]+1;
                }
            }
            int len = r - l + 1;
            maxLen = max(len,maxLen);
            hash[s[r]] = r;
            r++;
        }
    return maxLen;
    }
};