class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int l = 0 , m = 0 , h = n;
        
        while(m < h)
        {
            if(a[m] == 0)
            {
                swap(a[l] , a[m]);
                l++;
                m++;
            }
            else if(a[m] == 1)
            {
                m++;
            }
            else
            {
                swap(a[m] , a[h-1]);
                h--;
            }
        }
        
    }
};
