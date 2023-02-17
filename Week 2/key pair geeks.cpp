class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    unordered_map<int , int> fr;
	    
	    for(int i = 0 ;  i < n ; i ++)
	    {
	        if(fr[x - arr[i]]) return true;
	        fr[arr[i]]++;
	    }
	    return false;
	}
};
