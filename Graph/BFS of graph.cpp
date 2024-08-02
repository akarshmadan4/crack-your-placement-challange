class Solution {
  public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int vis[V]={0};
        vector<int> bfs;
        queue<int> q;
        q.push(0);
        vis[0]=1;
        while(!q.empty())
        {
            int n=q.front();
            bfs.push_back(n);
            q.pop();
            for(auto it:adj[n])
            {
                if(!vis[it]){
                q.push(it);
                vis[it]=1;}
            }
        }
        return bfs;
    }
};
