#define lli long long int
#define inf 1e18


class Solution {
public:

    lli dp[305][305];
    vector<int> nums;
    int premax[305];
    int sufmax[305];
    int n;

    lli recur(int i , int j)
    {
        if(i > j) return 0;
       

        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        
        
        lli ans = 0;
        for(int k = i ; k <= j ; k ++)
        {
            lli pre = 1;
            if(i-1 >= 0) pre = nums[i-1];
            lli suf = 1;
            if(j+1 < n ) suf = nums[j+1];

            ans = max(ans , pre*nums[k]*suf + recur(i , k-1) + recur(k+1 , j));
        }

        return dp[i][j] = ans;
    }


    int maxCoins(vector<int>& num) {
        
        nums = num;
        n = num.size();

        for(int i = 0 ; i <= n ; i ++)
        {
            for(int j = 0 ; j  <= n ; j ++)
            {
                dp[i][j] = -1;
            }
        }

        lli ans = recur(0 , n-1);

        return ans;
    }
};
