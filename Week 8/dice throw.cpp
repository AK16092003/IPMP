

class Solution {
  public:
    long long noOfWays(int M , int N , int X) {
        // code here
        
        long long dp[N+1][X+1];
        
        for(int i = 0 ; i <= N ; i++)
        for(int j = 0 ; j <= X ; j ++)
        dp[i][j] = 0;
        
        dp[0][0] = 1;
        
        for(int i = 1 ; i <= N ; i ++)
        {
            for(int j = 1 ; j <= X ; j ++)
            {
                for(int k = 1 ; k <= M && j-k>=0 ; k ++)
                {
                    dp[i][j] += dp[i-1][j-k];
                }
            }
        }
        
        return dp[N][X];
        
    }
};
