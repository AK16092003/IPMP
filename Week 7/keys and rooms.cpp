class Solution {
public:
    // bfs
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> visited(n , 0);

        queue<int> q;
        q.push(0);
        int count = 0;
        visited[0] = 1;
        count++;

        while(q.size())
        {
            int u = q.front();
            q.pop();
            for(int v : rooms[u])
            {
                if(!visited[v])
                {
                    visited[v] = 1;
                    q.push(v);
                    count++;
                    if(count == n) return true;
                }
            }
        }

        return count == n;
    }
};
