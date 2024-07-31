class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            int pos=-1;
            int cur=nums1[i];
            for(int j=0;j<nums2.size();j++)
            {
                if(nums2[j]==cur)
                {
                    pos=j;break;
                }
            }
            int count=0;
            for(int k=pos+1;k<nums2.size();k++)
            {
                if(nums2[k]>cur)
                {
                    ans.push_back(nums2[k]);count++;break;
                }
            }
            if(count==0)ans.push_back(-1);
        }
        return ans;
        
    }
};
