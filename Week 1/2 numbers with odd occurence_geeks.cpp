
class Solution{
    public:
    vector<long long int> twoOddNum(long long int A[], long long int N)  
    {
        // code here
        long long int x=0 , a=0 , b=0 , s=0;
        
        for(int i = 0; i < N ; i ++)
        {
            x ^= A[i];
        }
        
        s = x & ~(x - 1);
        for(int i = 0 ; i < N ; i ++)
        {
            if(A[i]&s)
            {
                a ^= A[i];
            }
            else
            {
                b ^= A[i];
            }
        }
        
        if(a < b) swap(a , b);
        return {a , b};
    }
};
