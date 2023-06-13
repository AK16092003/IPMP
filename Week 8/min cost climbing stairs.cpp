class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        

        int n = cost.size();

        int dp[n];
        for(int i = 0 ; i < n ; i ++) dp[i] = INT_MAX;

        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int i = 2 ; i < n ; i ++)
        {
            if(i-1>=0) dp[i] = min(dp[i] , dp[i-1] + cost[i]);
            if(i-2>=0) dp[i] = min(dp[i] , dp[i-2] + cost[i]);
        }

        return min(dp[n-1] , dp[n-2]);
    }
};
