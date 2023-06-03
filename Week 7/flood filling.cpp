class Solution {
public:

    int n , m;
    int visited[60][60];

    void dfs(int x , int y , int checkcolor ,  vector<vector<int>>& image  , int color)
    {
        if(x < 0 || y< 0 || x >= n || y >= m || visited[x][y] || image[x][y] != checkcolor) return;

        visited[x][y] = 1;
        image[x][y] = color;
        dfs(x ,y+1 ,checkcolor , image , color);
        dfs(x ,y-1 ,checkcolor , image , color);
        dfs(x-1 ,y ,checkcolor , image , color);
        dfs(x+1 ,y ,checkcolor , image , color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        n = image.size();
        m = image[0].size();

        for(int i = 0 ; i < n ; i ++) for(int j = 0 ; j < m ; j ++) visited[i][j] = 0;

        dfs(sr , sc ,image[sr][sc] , image , color);
        return image;
    }
};
