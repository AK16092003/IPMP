
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    sort(arr , arr + n);
	    int i = 0 , j = n-1;
	   
	    while(i < j)
	    {
	        while(arr[i] + arr[j] > x) j--;
	        
	        if(i >= j) break;
	        
	        if(arr[i] + arr[j] == x) return true;
	        
	        i++;
	    }
	    return false;
	}
};
