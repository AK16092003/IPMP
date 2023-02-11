class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) 
    {

        vector<int> odd_index;
        int n = nums.size();

        for(int i = 0 ; i < n ; i ++)
        {
            if(nums[i]%2)
                odd_index.push_back(i);
        }

        int ans = 0;

        if(odd_index.size() < k) return 0;

        for(int i = 0 ; i < odd_index.size(); i ++)
        {
            int j = i + k - 1;
            if(j >= odd_index.size()) break;

            int left_space = odd_index[i] - ((i == 0) ? -1 : odd_index[i-1]);
            int right_space = ((j == odd_index.size()-1) ? n : odd_index[j+1])- odd_index[j];
            ans += left_space*right_space;
        }

        return ans;

    }
};
