//memorisation
class Solution {
public:
    int f(int ind,int t,int k,int n,vector<int> prices,vector<vector<int>> &dp)
    {
        if(ind==n)return 0;
        if(t==2*k)return 0;
        if(dp[ind][t]!=-1)return dp[ind][t];
        int profit=0;
        if(t%2==0)
        {
            profit=max(-prices[ind]+f(ind+1,t+1,k,n,prices,dp),f(ind+1,t,k,n,prices,dp));
        }
        else
            profit=max(prices[ind]+f(ind+1,t+1,k,n,prices,dp),f(ind+1,t,k,n,prices,dp));

        return dp[ind][t]=profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2*k,-1));
        return f(0,0,k,n,prices,dp);
        
    }
};
