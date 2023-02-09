
class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int N) {
        // Your code here
        int X = 0;
        for(int i = 0 ; i < N+2 ; i ++)
        {
            X ^= arr[i];
        }
        for(int i = 1 ; i <= N ; i ++)
        {
            X ^= i;
        }
        
        
        int S = X & ~(X-1);
        
        int a = 0 , b = 0;
        for(int i = 0 ; i < N+2 ; i ++)
        {
            if(arr[i] & S) a^=arr[i];
            else b^= arr[i];
        }
        for(int i = 1 ; i <= N ; i ++)
        {
            if(i & S) a^=i;
            else b^=i;
        }
        int c0 = 0 , c1 = 0;
        for(int i = 0 ; i < N+2 ; i ++)
        {
            if(arr[i] == a)
            {
                c0++;
            }
            if(arr[i] == b)
            {
                c1++;
            }
            if(c0 == 2)return {a , b};
            else if(c1 == 2)return  {b , a};
            
        }
        
        return {0 , 0 };
    }
};
