class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,maxlen=0,n=s.length();
        int hash[256];
        memset(hash,-1,sizeof(hash));

        for(int r=0;r<n;r++){
            unsigned char c = s[r];
            if(hash[c]>=l){
                l = hash[c] + 1;
            }
            maxlen = max(maxlen,r-l+1);
            hash[c] = r;
        }
        return maxlen;
    }
};