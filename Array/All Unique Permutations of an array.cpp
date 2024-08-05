class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
       sort(arr.begin(),arr.end());
       vector<vector<int>>ans;
       ans.push_back(arr);
       while(next_permutation(arr.begin(),arr.end())){
           ans.push_back(arr);
       }
       return ans;
    }
};
