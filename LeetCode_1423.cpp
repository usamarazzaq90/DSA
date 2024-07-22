class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lSum=0, rSum=0, maxSum;
        for(int i=0;i<k;i++) lSum=lSum+cardPoints[i];

        maxSum=lSum;
        int rIndex=cardPoints.size()-1;
        for(int i=k-1; i>=0;i--){
            lSum=lSum-cardPoints[i];
            rSum=rSum+cardPoints[rIndex];
            rIndex=rIndex-1;
            maxSum=max(maxSum,(lSum+rSum));
        }
        return maxSum;
    }
};
