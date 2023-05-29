#define maxsz 205

vector<int> visited(maxsz);
vector<int> adjlst[maxsz];


class Solution {
public:

    void dfs(int u)
    {
        visited[u] = 1;
        for(int v : adjlst[u])
        {
            if(!visited[v])
            {
                dfs(v);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();

        for(int i =0 ; i  <= n ; i ++)
        {
            visited[i] = 0;
            adjlst[i].clear();
        }

        for(int i = 0 ; i < n ; i ++)
        {
            for(int j = 0 ; j  < n ; j ++)
            {
                if(isConnected[i][j])
                {
                    adjlst[i].push_back(j);
                    adjlst[j].push_back(i);
                }
            }
        
        }

        int ans = 0;

        for(int i = 0 ; i < n ; i ++)
        {
            if(!visited[i])
            {
                ans++;
                dfs(i);
            }
        }

        return ans;
    }
};
