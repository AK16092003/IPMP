int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int l = 0;
    int sum = 0;
    int ans = 0;
    
    for(int r = 0 ; r < n ; r ++)
    {
        sum += A[r];
        while(sum >= B)
        {
            sum -= A[l];
            l++;
        }
        ans += (r - l + 1);
        
    }
    return ans;
}
