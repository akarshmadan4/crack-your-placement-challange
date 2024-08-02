class Solution {
  public:
  void dfs(int node,vector<int> adj[],int vis[],vector<int> &ls)
  {
      vis[node]=1;
      ls.push_back(node);
      for(auto it:adj[node])
      {
          if(!vis[it])
          {
              dfs(it,adj,vis,ls);
          }
      }
  }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V]={0};
        vector<int> ls;
        dfs(0,adj,vis,ls);
        return ls;
    }
};
