class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int x = 0;
        for(int i = 1 ; i <= n ; i ++) x ^= i;
        for(int i = 0; i < n-1; i ++) x^= array[i];
        return x;
    }
};
