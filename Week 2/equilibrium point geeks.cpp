class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long pref[n+1];
        pref[0] = 0;
        for(int i = 0 ;i  < n ; i ++)
        {
            pref[i+1] = pref[i] + a[i]; 
        }
        
        long long ss = pref[n];
        
        for(int i = 0 ;i < n ; i ++)
        {
            if(2*(pref[i+1] - a[i]) == (ss - a[i])) return i+1;
        }
        return -1;
    }

};
