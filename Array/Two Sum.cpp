//TC-O(N2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<size(nums);i++)
        {
            for(int j=i+1;j<size(nums);j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);                  
                }
            }
        }
        return ans;       
    }
};

//Hashing  TC-O(nlogn)   SC-O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hash;
        for(int i=0;i<nums.size();i++)
        {
            int more=target-nums[i];
            if(hash.find(more)!=hash.end())return {hash[more],i};

            hash[nums[i]]=i;
        }   
        return {-1,-1};
    }
};




