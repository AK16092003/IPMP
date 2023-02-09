int Solution::solve(vector<int> &a, int B) {
    int n = a.size();
    
    map<int , int> frq;
    int dist = 0;
    int ans = 0;
    int l = 0;
    
    for(int r = 0 ; r < n ; r ++)
    {
        frq[a[r]]++;
        if(frq[a[r]] == 1) dist++;
        
        while(dist > B)
        {
            frq[a[l]]--;
            if(frq[a[l]] == 0) dist--;
            l++;
        }
        
        if(dist <= B)
        {
            ans += (r - l + 1);
        }
    }
    
    B--;
    frq.clear();
    dist = 0;
    l = 0;
    
    for(int r = 0 ; r < n ; r ++)
    {
        frq[a[r]]++;
        if(frq[a[r]] == 1) dist++;
        
        while(dist > B)
        {
            frq[a[l]]--;
            if(frq[a[l]] == 0) dist--;
            
            l++;
        }
        
        if(dist <= B)
        {
            ans -= (r - l + 1);
        }
    }
    return ans;
}
