
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    int temp[2*n];
	    for(int i = 0 ; i < 2*n ; i ++) temp[i] = 10000005;
	    
	    int k1 = 0, k2 = 1;
	    
	    
	    for(int i = 0 ; i < n ; i ++)
	    {
	            if(arr[i] >= 0)
	            {
	                temp[k1] = arr[i];
	                k1 += 2;
	            }
	            else
	            {
	                temp[k2] = arr[i];
	                k2 += 2;
	            }
	    }
	    
	    int k = 0;
	    for(int i = 0 ;i < 2*n ; i ++)
	    {
	        if(temp[i] != 10000005)
	        {
	            arr[k] = temp[i];
	            k++;
	        }
	    }
	    
	}
};

