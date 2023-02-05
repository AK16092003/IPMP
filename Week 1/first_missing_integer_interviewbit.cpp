int Solution::firstMissingPositive(vector<int> &A) {
    int frq[1000001];
    
    for(int i = 0 ; i < 1000001 ; i ++) frq[i] = 0;
    
    int n = A.size();
    for(int i:A)
    {
        if(i > 0)
            frq[i]++;
    }
    
    for(int i = 1 ; i <= 1000001 ; i ++)
    {
        if(frq[i] == 0)
        {
            return i;
        }
    }
    return -1;
}
