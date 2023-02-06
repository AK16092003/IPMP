class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        
        //code here
        vector<int> arr;
        for(int i = 0 ; i < n ; i ++) arr.push_back(a[i]);
        for(int i = 0 ; i < m ; i ++) arr.push_back(b[i]);
        
        sort(arr.begin() , arr.end());
        
        int ans = 1;
        
        for(int i = 1 ; i < n+m ; i ++)
        {
            if(arr[i] != arr[i-1])
            {
                ans++;
            }
        }
        return ans;
    }
};
