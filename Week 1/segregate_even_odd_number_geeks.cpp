class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    vector<int> v;
	    for(int i = 0 ; i < n ; i ++) v.push_back(arr[i]);
	    sort(v.begin() , v.end());
	    
	    int k = 0;
	    for(int i = 0 ;i < n; i ++)
	    {
	        if(v[i]%2 == 0)
	        {
	            arr[k] = v[i];
	            k++;
	        }
	    }
	    for(int i = 0 ;i < n; i ++)
	    {
	        if(v[i]%2 == 1)
	        {
	            arr[k] = v[i];
	            k++;
	        }
	    }
	}
};
