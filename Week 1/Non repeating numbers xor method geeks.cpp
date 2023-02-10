class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
    
        int n = nums.size();
        n = (n - 2)/2;
        
        int x = 0;
        for(int i = 0; i < 2*n+2 ; i ++)
        {
            x^= nums[i];
        }
        
        int s = x & ~(x-1);
        int a = 0 , b  = 0;
        for(int i = 0 ; i < 2*n+2  ; i ++)
        {
            if(s&nums[i])
            {
                a^= nums[i];
            }
            else
            {
                b ^= nums[i];
            }
        }
        if(b<a)swap(a,b);
        return {a , b};
        
    }
};
