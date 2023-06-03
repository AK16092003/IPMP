class Solution {
public:

    int n , m ;
    int visited[500][500];
    bool ok = true;

    void dfs(int x , int y ,vector<vector<int>> &grid)
    {
        if(x < 0 || x >= n || y < 0 || y >= m || visited[x][y] || grid[x][y] == 1) return;
        visited[x][y] = 1;
        if(x == 0 || x == n-1 || y == 0 || y == m-1) ok = false;
        dfs(x+1 , y , grid);
        dfs(x-1 , y , grid);
        dfs(x , y+1 , grid);
        dfs(x , y-1 , grid);
    }
    int closedIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int ans = 0;

        for(int i = 0 ; i <= n ; i ++) for(int j = 0 ; j <= m ; j ++) visited[i][j] = 0;
        for(int i = 0 ; i < n ; i ++)
        {
            for(int j  = 0 ; j < m ; j ++)
            {
                if(!visited[i][j] && grid[i][j] == 0)
                {
                    ok = true;
                    dfs(i  , j , grid);
                    if(ok)
                    ans++;
                }
            }
        }

        return ans;
    }
};
