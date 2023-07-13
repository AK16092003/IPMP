
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool cycle=  false;
    int visited[100005];
    vector<int> adjlst[100005];
    
    void dfs(int u)
    {
        visited[u] = 2;
        
        for(int v : adjlst[u])
        {
            if(visited[v] == 0) dfs(v);
            else if(visited[v] == 2) cycle = true;
        }
        
        visited[u] = 1;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        
        for(int i = 0 ; i < V ; i ++) 
        {
            visited[i] = 0;
            adjlst[i] = adj[i];
        }
        for(int u = 0 ; u < V ; u ++)
        {
            if(!visited[u])
            {
                dfs(u);
            }
        }
        return cycle;
    }
};
