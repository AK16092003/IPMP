
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        
        sort(A , A + n);
        for(int i = 0 ; i < n ; i ++)
        {
            int search = X - A[i];
            int j = i+1 , k = n-1;
            while( j < k)
            {
                while(A[j] + A[k] > search) k--;
                if(k <= j) break;
                if(A[j] + A[k] == search)return true;
                j++;
            }
        }
        
        return false;
        
    }

};
