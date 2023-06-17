
map<int ,  int> allsub(vector<int> &v , int l , int r)
{
    int len = r - l + 1;
    map<int , int> frq;
    for(int i = 0 ; i < (1 << len) ; i ++)
    {
        int var = 0;
        for(int j = 0 ; j < len ; j ++)
        {
            if(i&(1<<j))
            {
                var ^= v[l+j];
            }
        }
        
        frq[var]++;
    }
    return frq;
    
}


class Solution{
public:
    int subsetXOR(vector<int> arr, int N, int K) {
        // code here
        
        map<int , int> frq1 , frq2;
        
        frq1 = allsub(arr , 0 , N/2 );
        frq2 = allsub(arr , N/2+1 , N-1);
        
        int ans = 0;
        for(auto kk : frq1)
        {
            int xx = kk.first;
            int search = xx^K;
            ans += frq1[xx]*frq2[search];
        }
        
        
        return ans;
    }
};
