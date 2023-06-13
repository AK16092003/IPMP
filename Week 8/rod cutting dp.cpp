class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        long long  dp[n+1];
        for(int i = 0 ; i <= n ; i ++) dp[i] = 0;
    
        for(int i  =1 ; i <= n ; i ++)
        {
            for(int j = 1 ; j <= i ; j ++)
            {
                dp[i] = max(dp[i] , price[j-1] + dp[i-j]);
            }
        }
        
        return dp[n];
        
    }
};
