class Solution{
public:
	void pushZerosToEnd(int a[], int n) {
	    // code here
	    int i = 0;
	    
	    for(int j = 0 ; j < n ; j ++)
	    {
	        if(a[j] != 0)
	        {
	            swap(a[i] , a[j]);
	            i++;
	        }
	    }
	}
};
