#define maxsz 200005
#define  vi vector<int>
#define  pb push_back

vi adjlst[maxsz];
vi visited(maxsz);

void dfs(int u)
{
    visited[u] = 1;
    for(int v:  adjlst[u])
    {
        if(!visited[v])
        dfs(v);
    }
}

class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        for(int i = 0 ; i <= n ; i ++)
        {
            adjlst[i].clear();
            visited[i] = 0;
        }      

        int edge = 0;

        for(vi k:connections)
        {
            int u = k[0];
            int v = k[1];
            adjlst[u].pb(v);
            adjlst[v].pb(u);
            edge++;
        }

        if(edge < n-1) return -1;

        int comp = 0;
        for(int i = 0 ; i < n ; i ++)   
        {
            if(!visited[i])
            {
                dfs(i);
                comp++;
            }
        }


        return comp-1;
    }   
};
