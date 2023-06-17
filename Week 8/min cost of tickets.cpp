class Solution {
public:
    vector<int> days;
    vector<int> costs;
    int n;
    int dp[366];

    int cost(int i){
        if(i == n) return 0;
        if(dp[i] != -1) return dp[i];
        int ans = INT_MAX;
        int count[3] = {1,7,30};

        for(int k = 0 ; k < 3; k ++)
        {
            int j = i;
            while(j<n && days[j]<days[i]+count[k])
            {
                j++;
            }

            ans = min(ans ,costs[k]+cost(j));
        }
        return dp[i] = ans;
    }

    int mincostTickets(vector<int>& dd, vector<int>& cc) {
        days = dd;
        costs = cc;
        n = dd.size();
        for(int i = 0 ; i <= n ; i ++) dp[i] = -1;

        return cost(0);
    }
};
