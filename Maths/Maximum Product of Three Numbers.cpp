class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int fmax=INT_MIN,smax=INT_MIN,tmax=INT_MIN;
        int fmin=INT_MAX,smin=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<fmin)
            {
                smin=fmin;
                fmin=nums[i];
            }
            else if(nums[i]<smin)
            smin=nums[i];
            if(nums[i]>fmax)
            {
                tmax=smax;
                smax=fmax;
                fmax=nums[i];
            }
            else if(nums[i]>smax)
            {
                tmax=smax;
                smax=nums[i];
            }
            else if(nums[i]>tmax)
            tmax=nums[i];
        }
        return max(fmax*smax*tmax,fmin*smin*fmax);
        
    }
};
