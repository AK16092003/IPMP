#define pii pair<int , int>


class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        pii dp[n];

        for(int i = 0 ;i  < n ; i ++)
        {
            dp[i] = {0,-1};
        }

        pii ans = {-1,-1};
        int xx = 0;

        for(int i = 0 ; i < n ; i ++)
        {
            dp[i] = {1,i};
            for(int j = 0 ; j < i ; j ++)
            {
                if(nums[i]%nums[j] == 0)
                {
                    dp[i] = max(dp[i] , {1 + dp[j].first , j});
                }
            }
            if(ans < dp[i]) {ans = dp[i]; xx = i;}
        }

        vector<int> fans;
        int st = xx;
        fans.push_back(nums[xx]);

        while(dp[st].second != st)
        {
            st = dp[st].second;
            fans.push_back(nums[st]);
        }


        return fans;
    }
};
