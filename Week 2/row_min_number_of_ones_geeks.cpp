
class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> A) {
        // code here
        
        int ans = 0;
        int mini = m + 2;
        
        for(int i = 0 ; i < n ; i ++)
        {
            int count = 0;
            for(int j = 0 ;j < m ; j++)
            {
                count += A[i][j];
            }
            if(count < mini)
            {
                mini = count;
                ans = i;
            }
        }
        return ans+1;
    }
};

