class Solution {
public:
    int minDeletions(string s) {
        map<int,int> mp;
        for(auto ch:s)mp[ch]++;

        int ans=0;
        set<int> st;
        for(auto [ch,cnt]:mp)
        {
            while(cnt && st.count(cnt))
            {
                ans++;cnt--;
            }
            st.insert(cnt);
        }
        return ans;
        
    }
};
