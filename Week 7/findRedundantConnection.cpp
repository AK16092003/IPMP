int parent[1005];
int _size[1005];

int find_top(int u)
{
    if(parent[u] == u) return u;
    return parent[u] = find_top(parent[u]);
}

bool issame(int a , int b)
{
    a = find_top(a);
    b = find_top(b);
    return a == b;
}
void merge(int a , int b)
{
    a = find_top(a);
    b = find_top(b);
    if(a!=b)
    {
        if(_size[a] < _size[b]) swap(a , b);
        parent[b] = a;
        _size[a] += _size[b];
    }
}


class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        for(int i = 0 ; i <= n ; i ++)
        {
            parent[i] = i;
            _size[i] = 1;
        }

        for(vector<int> e : edges)
        {
            int u = e[0];
            int v = e[1];
            
            if(issame(u,v))
            {
                return {u , v};
            }

            merge(u ,v);
        }

        return {};
    }
};
