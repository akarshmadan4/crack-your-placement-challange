class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(maxi>=n-1)return true;
            if(nums[i]==0 && maxi==i)return false;
            if(i+nums[i]>maxi)maxi=i+nums[i];
        }
        return true;
        
    }
};
