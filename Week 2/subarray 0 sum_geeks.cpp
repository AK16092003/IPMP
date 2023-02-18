class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        
        unordered_map<int , int> ff;
        ff[0] = 1;
        int p = 0;
        for(int i = 0 ; i < n ; i ++)
        {
            p += arr[i];
            if(ff[p]) return true;
            ff[p] = 1;
        }
        return false;
    }
};
