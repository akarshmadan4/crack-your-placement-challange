//memorization
class Solution {
public:
    int solve(int ind,int target,vector<int> &coins,vector<vector<int>> &dp)
    {
        if(ind==0)
        {
            if(target%coins[ind]==0)return target/coins[ind];
            return 1e9;
        }
        if(dp[ind][target]!=-1)return dp[ind][target];
        int notpick=solve(ind-1,target,coins,dp);
        int pick=INT_MAX;
        if(target>=coins[ind])
        pick=1+solve(ind,target-coins[ind],coins,dp);

        return dp[ind][target]=min(pick,notpick);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int ans= solve(n-1,amount,coins,dp);
        if(ans>=1e9)return -1;
        return ans;
    }
};


//Tabulation
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,0));
        for(int i=0;i<=amount;i++)
        {
            if(i%coins[0]==0)dp[0][i]=i/coins[0];
            else dp[0][i]=1e9;
        }
        for(int ind=1;ind<n;ind++)
        {
            for(int target=0;target<=amount;target++)
            {
                int notpick=dp[ind-1][target];
                int pick=INT_MAX;
                if(target>=coins[ind])
                pick=1+dp[ind][target-coins[ind]];

                dp[ind][target]=min(notpick,pick);
            }
        }
        if(dp[n-1][amount]>=1e9)return -1;
        return dp[n-1][amount];
    }
};


