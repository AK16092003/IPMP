

class Solution {
public:
    
    int coinChange(vector<int>& coins, int amount) {
        
        int dp[100000];
        for(int i = 0 ; i < 100000 ; i ++) dp[i] = 0;

        for(int x = 1 ; x <= amount ; x ++)
        {
            int ans = 100000;
            for(int i : coins)
            {
                if(i <= x)
                    ans = min(ans , 1 + dp[x - i]);
            }
            dp[x] = ans;
        }
        return dp[amount] >= 100000 ? -1 : dp[amount];
    }
};
