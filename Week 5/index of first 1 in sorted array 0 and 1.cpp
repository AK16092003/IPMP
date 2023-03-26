class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        // Your code goes here
        int l = 0 , r = n;
        while(l < r)
        {
            int mid = (l+r)/2;
            if(a[mid] == 0)
            {
                l = mid+1;
            }
            else
            {
                r = mid;
            }
        }
        return (l == n)?-1:l;
    }
};
