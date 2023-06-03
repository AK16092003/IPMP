#define maxsz 200005
#define vi vector<int>
#define vpii vector<pair<int , int>>
#define pii pair<int , int>
#define pb push_back
vi visited(maxsz , 0);
vi degree(maxsz , 0);
vi adjlst[maxsz];
vpii finalans(maxsz);
pii empt = {-1,-1};

pair<int , int> dfs(int  u , int p , vi& quiet )
{
   // cout << u << "  " << p << endl;
    if(finalans[u] != empt) return finalans[u];
    pair<int , int> ans = {quiet[u],u};
    for(int v : adjlst[u])
    {
        if(v != p)
        {
            ans = min(ans , dfs(v , u , quiet));
        }
    }
    finalans[u] = ans;
    return ans;
}

class Solution {
public:
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n = quiet.size();

        for(int i  = 0; i  <n ; i ++)
        {
            finalans[i] = {-1 , -1};
            degree[i] = 0;
            adjlst[i].clear();
            visited[i] = 0;
        }
        for(vi  e : richer)
        {
            adjlst[e[1]].pb(e[0]);
            degree[e[0]]++;
        }

        for(int i = 0 ; i < n ; i ++)
        {
            if(degree[i] == 0)
            {
                dfs(i ,-1 , quiet);
                //cout << endl;
            }
        }

        vi ans(n);
        for(int i = 0 ; i < n ; i ++) ans[i] = finalans[i].second;
        return ans;
    }
};
