class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int size=tasks.size();
        int freq[26]={0};
        for(char ch:tasks)
        {
            freq[ch-'A']++;
        }
        sort(begin(freq),end(freq));
        int space=freq[25]-1;
        int initial=space*n;
        for(int i=24;i>=0;i--)
        {
            initial-=min(space,freq[i]);
        }
        return initial<0?tasks.size():initial+tasks.size(); 
    }
};
