int Solution::threeSumClosest(vector<int> &A, int B) {
    
    long long n = A.size();
    long long B1 = B;
    vector<long long> A1(n);
    for(int i = 0 ; i < n ; i ++ ) A1[i] = A[i];
    
    sort(A1.begin() , A1.end());
    long long maxisum = INT_MAX;
    long long minisum = INT_MIN;
    
    
    for(int i = 0 ; i < n ; i ++)
    {
        long long search = (long long)((long long)B1 - (long long)A1[i]);
        int j = i+1 ;
        int k = n-1;
        
        while(j < k)
        {
            while(A1[j] + A1[k] >= search)
            {
                maxisum = min(maxisum , (long long)(A1[i] + ((long long)A1[j]) + (long long)(A1[k]))); 
                k--;   
                if(j >= k) break;
            }
            
            if(j >= k) break;
            minisum = max(minisum , (long long)(A1[i] + ((long long)A1[j]) + (long long)(A1[k]))); 
                
            j++;
        }
    }
    
    if(abs(B - minisum) > abs(B - maxisum)) return maxisum;
    return minisum;
}
