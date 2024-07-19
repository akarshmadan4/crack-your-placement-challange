class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,msum=0,n=cardPoints.size();
        for(int i=0;i<k;i++)
        {
            lsum+=cardPoints[i];
        }
        msum=lsum;
        int rind=n-1;
        for(int i=k-1;i>=0;i--)
        {
            lsum-=cardPoints[i];
            rsum+=cardPoints[rind];
            msum=max(msum,lsum+rsum);
            rind--;
        }
        return msum;   
    }
};
