
vector<int> visited(100005 , 0);
vector<vector<int>> adjlst;
int com = 0;

class Solution {
public:
    void dfs(int u)
    {
        visited[u] = 1;
        com++;

        for(int v:adjlst[u])
        {
            if(!visited[v])
            {
                dfs(v);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        adjlst = rooms;
        int n = rooms.size();
        for(int i = 0 ; i <= n ; i ++ )visited[i] = 0;
        com = 0;
        dfs(0);    
        return com == n;
    }
};
