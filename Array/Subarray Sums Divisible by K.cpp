class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size(),prefsum=0,ans=0;
        unordered_map<int,int> prevocc;
        prevocc[0]=1;
        for(int i=0;i<n;i++)
        {
            prefsum=(prefsum+nums[i]%k + k)%k;
            ans+=prevocc[prefsum];
            prevocc[prefsum]++;
        }
        return ans;
    }
};
