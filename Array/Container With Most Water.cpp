class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int s=0,e=n-1;
        int maxi=INT_MIN;
        while(s<=e)
        {
            int first=height[s];
            int second=height[e];
            int area=(min(first,second)*(e-s));
            maxi=max(maxi,area);
            if(first>second)e--;
            else s++;
        }
        return maxi;
        
    }
};
