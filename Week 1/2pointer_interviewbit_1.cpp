int Solution::solve(vector<int> &A, int B) {
    
    int n = A.size();
    int count0 = 0;
    int l = 0;
    int ans = 0;
    for(int r = 0 ; r < n ; r ++)
    {
        if(A[r] == 0) count0++;
        
        while(!(count0 <= B))
        {
            if(A[l] == 0) count0--;
            l++;
        }
        
      //  cout << l << " " << r << " " << count0 << endl;
        ans = max(ans , r - l + 1);
    }
    return ans;
}
