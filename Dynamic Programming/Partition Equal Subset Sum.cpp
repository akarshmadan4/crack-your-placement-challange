//Memoization
class Solution {
public:
    bool solve(int ind,int target,vector<int> &nums,vector<vector<int>> &dp)
    {
        if(target==0)return true;
        if(ind==0)return nums[ind]==target;
        if(dp[ind][target]!=-1)return dp[ind][target];

        bool nottake=solve(ind-1,target,nums,dp);
        bool take=false;
        if(nums[ind]<=target)
        take=solve(ind-1,target-nums[ind],nums,dp);

        return dp[ind][target]=take | nottake;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        if(sum%2!=0)return false;
        else
        {
            int k=sum/2;
            vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
            return solve(n-1,k,nums,dp);
        }
        
    }
};
