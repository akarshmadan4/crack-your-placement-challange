/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int size=nums.size();
        sort(nums.begin(),nums.end());
        if(size==1 || size==2)
            return nums[0];
       for(int i=0;i<size;i++)
       {
           if(nums[i]==nums[i+1])
               count++;
           else
           {
               if(count>(size/2))
                   return nums[i];
               count=1;
               
           }
       }
        return -1;
    }
};*/

//using map  TC-O(nlogn)   SC-O(n)
/*class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        int maj=nums.size()/2;
        for(auto ele:mp)
        {
            if(ele.second>maj)return ele.first;
        }
        return 0;
    }
};*/

//Moore Voting Algo  TC-O(n)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el,count=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                el=nums[i];count=1;
            }
            else if(nums[i]==el)count++;
            else count--;
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==el)cnt++;
        }
        if(cnt>n/2)return el;
        else return -1;
    }
};
