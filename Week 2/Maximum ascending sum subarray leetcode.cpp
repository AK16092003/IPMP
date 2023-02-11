class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        int ans = 0;
        int pre = 0;
        int cur = 0;


        int n = nums.size();
        
        for(int i= 0 ;  i < n ; i ++)
        {
            if(nums[i] > pre)
            {
                cur += nums[i];
            }
            else
            {
                ans = max(ans , cur);
                cur = nums[i];
            }
            pre = nums[i];
        }

        ans = max(ans , cur);
        return ans;
    }
};
