
class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here        
        vector<long long int> out(n);
        long long int temp = 1;
        for(int i = 0 ; i < n ; i ++)
        {
            out[i] = temp;
            temp = temp*nums[i];
        }
        
        temp = 1;
        for(int i = n-1; i >= 0 ; i --)
        {
            out[i] *= temp;
            temp = temp*nums[i];
        }
        
        return out;
        
    }
};
