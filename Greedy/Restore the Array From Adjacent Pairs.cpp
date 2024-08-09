class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        int n=adjacentPairs.size()+1;
        unordered_map<int,vector<int>> graph;
        unordered_map<int,int> indegree;
        for(auto pair:adjacentPairs)
        {
            graph[pair[0]].push_back(pair[1]);
            graph[pair[1]].push_back(pair[0]);
            indegree[pair[0]]++;
            indegree[pair[1]]++;
        }
        int start;
        for(auto& [node,deg]:indegree)
        {
            if(deg==1)
            {start=node;break;}
        }
        int cur=start,prev=INT_MIN;
        vector<int> nums;
        while(nums.size()<n)
        {
            nums.push_back(cur);
            for(auto next:graph[cur])
            {
                if(next!=prev)
                {
                    prev=cur;
                    cur=next;break;
                }
            }
        }
        return nums;

    }
};
