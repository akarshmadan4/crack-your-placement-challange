//Tabulation
/*class Solution {
public:
    int climbStairs(int n) {
       vector<int> dp(n+1,0);
       dp[0]=1;
       dp[1]=1;
       for(int i=2;i<=n;i++)
       {
           dp[i]=dp[i-1]+dp[i-2];
       }
       return dp[n];
    }
};*/

//Memoization
/*class Solution {
public:
    int solve(int i,vector<int> &dp)
    {
        if(i==0 || i==1)return 1;
        if(dp[i]!=-1)return dp[i];
        int left=solve(i-1,dp);
        int right=solve(i-2,dp);
        return dp[i]=left+right;
    }
    int climbStairs(int n) {
       vector<int> dp(n+1,-1);
       return solve(n,dp);
    }
};*/

//Space Optimization
class Solution {
public:
    int climbStairs(int n) {
       int prev2=1;
       int prev1=1;
       int curi;
       if(n==1) return 1;
       for(int i=2;i<=n;i++)
       {
           curi=prev2+prev1;
           prev2=prev1;
           prev1=curi;
       }
       return curi;
    }
};
