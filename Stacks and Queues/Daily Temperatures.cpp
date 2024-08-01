class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> res(n,0);
        deque<int> q;
        for(int i=n-1;i>=0;i--)
        {
            if(q.empty())
            {
                q.push_front(i);
                res[i]=0;
            }
            else
            {
                while(!q.empty() && temperatures[i]>=temperatures[q.front()])
                    q.pop_front();
                if(q.empty())res[i]=0;
                else res[i]=q.front()-i;

                q.push_front(i);
            }
        }
        return res;
        
    }
};
