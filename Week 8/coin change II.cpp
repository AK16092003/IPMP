class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        long long dp[amount+1][coins.size()];
        for(int i = 0 ; i <= amount ; i ++) 
        {
            for(int j = 0 ; j < coins.size() ; j ++)
            {
                dp[i][j] = 0;
            }
        }
        
        for(int j = 0 ; j < coins.size() ; j ++)
        {
            dp[0][j] = 1;
        }
        
        for(int i = 1 ; i <= amount ; i ++)
        {
            for(int j = 0; j<coins.size() ; j ++)
            {
                if(i - coins[j] >= 0)
                {
                    dp[i][j] += dp[i-coins[j]][j];
                }
                if(j>0)
                {
                    dp[i][j] += dp[i][j-1];
                }
            }
        }

        // for(int i = 0  ; i <= amount ; i ++)
        // {
        //     for(int j = 0 ; j < coins.size() ; j ++)
        //     {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        return dp[amount][coins.size()-1];
    }
};
