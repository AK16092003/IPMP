class Solution{
public:	
	
	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    // code here
	    int n = a.size();
	    int m = b.size();
	    
	    int i = n-1 , j = m-1;
	    vector<int> ans;
	    int c = 0;
	    
	    while(i >= 0 || j >= 0)
	    {
	       int sum = c;
	       if(i >= 0) sum += a[i];
	       if( j >= 0) sum += b[j];
	       c = sum/10;
	       sum = sum%10;
	       ans.push_back(sum);
	       i--;
	       j--;
	    }
	    if(c) ans.push_back(c);
	    reverse(ans.begin() , ans.end());
	    return ans;
	}

};
