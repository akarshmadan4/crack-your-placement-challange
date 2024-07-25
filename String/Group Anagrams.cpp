class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++)
        {
            string str=strs[i];
            sort(str.begin(),str.end());
            mp[str].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto it:mp)
        {
            vector<string> temp;
            for(int i=0;i<(it.second).size();i++)
            {
                temp.push_back(it.second[i]);
            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};
