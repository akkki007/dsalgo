class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,maxsum=0;

        // we have to first calculate the lsum 
        for(int i=0;i<k;i++){
            lsum += cardPoints[i];
        }
        maxsum = lsum;
        int rindex = cardPoints.size()-1;
        // now we calculate the rsum by subtracting the elements that we added in the lsum one by one
        for(int i=k-1;i>=0;i--){
            lsum = lsum - cardPoints[i];
            rsum = rsum + cardPoints[rindex];
            rindex = rindex-1;
            maxsum = max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};