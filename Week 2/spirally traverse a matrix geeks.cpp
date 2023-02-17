class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> ans;
        
        int visited[r][c];
        
        for(int i = 0 ; i < r ; i ++)
        {
            for(int j = 0 ; j < c ; j ++)
            {
                visited[i][j] = 0;
            }
        }
        
        
        int x = 0  , y = 0;
        int d = 1;
        /*
            d
            1 - right
            2 - down
            3 - left
            4 - up
        */
        
        for(int i = 0 ; i < r*c ; i ++)
        {
            ans.push_back(matrix[x][y]);
            visited[x][y] = 1;
            
            if(d == 1)
            {
                y++;
                if(y == c || visited[x][y] == 1)
                {
                    x++;
                    y--;
                    d = 2;
                }
            }
            
            else if(d == 2)
            {
                x++;
                if(x == r || visited[x][y] == 1)
                {
                    x--;
                    y--;
                    d = 3;
                }
            }
            
            else if(d == 3)
            {
                y--;
                if( y == -1 || visited[x][y] == 1)
                {
                    y++;
                    x--;
                    d = 4;
                }
            }
            
            else if(d == 4)
            {
                x--;
                if(x == -1 || visited[x][y] == 1)
                {
                    x++;
                    y++;
                    d = 1;
                }
            }
            
            
        }
        
        return ans;
        
    }
};
