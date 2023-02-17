class Solution {
public:

    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin() , nums.end());

        for(int i = 0; i < n ; i ++)
        {
            for(int j = i+1 ; j < n ; j ++)
            {

                int k = j+1 , l = n-1;
                while(k < l)
                {
                    long long int cursum = (long long int)nums[i] + (long long int)nums[j] + (long long int)nums[k] + (long long int)nums[l];

                    while(k < l && cursum > target)
                    {
                        l--;cursum = (long long int)nums[i] + (long long int)nums[j] + (long long int)nums[k] + (long long int)nums[l];
                    }

                    if(k >= l)
                    {
                        break;
                    }
cursum = (long long int)nums[i] + (long long int)nums[j] + (long long int)nums[k] + (long long int)nums[l];
                    if(cursum == target)
                    {
                        ans.insert({nums[i] , nums[j] , nums[k] , nums[l]});
                    }
                    k++;
                }
            }
        }

        vector<vector<int>> ans_v;
        for(auto k : ans) ans_v.push_back(k);
        return ans_v;
    }
};
