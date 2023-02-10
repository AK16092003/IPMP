class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	
    	int mini = 1e9;
    	int maxi = -1e9;
    	
    	for(int i = 0 ;i < N ; i +=2)
    	{
    	   if(i+1 == N)
    	   {
    	       mini = min(mini , A[i]);
    	       maxi = max(maxi , A[i]);
    	       
    	       break;
    	   }
    	   if(A[i] < A[i+1])
    	   {
    	       mini =  min(mini , A[i]);
    	       maxi =  max(maxi , A[i+1]);
    	   }
    	   else
    	   {
    	       mini =  min(mini , A[i+1]);
    	       maxi =  max(maxi , A[i]);
    	   }
    	}
    	
    	
    	return mini + maxi;
    	
    	
    }

};

