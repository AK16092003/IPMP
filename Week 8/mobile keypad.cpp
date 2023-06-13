#define lli long long int
#define vl vector<lli>
#define pll pair<lli , lli>
#define vpll vector<pll>

vector<vl> mat = {{1,2,3} , {4,5,6} , {7,8,9} , {-1,0,-1}};
vpll dif = {{-1,0} , {0,-1} , {1,0} , {0,1} , {0,0}};
lli dp[30][4][4];


class Solution{

    lli recur(lli n , int x , int y){
        if(n == 0) return 1;
        if(dp[n][x][y] != -1) return dp[n][x][y];
        
        lli ans = 0;
        for(pll dd : dif)
        {
            lli xx = dd.first + x;
            lli yy = dd.second + y;
            
            if(xx>=0 && xx<=3 && yy>=0 && yy<3)
            {
                if(mat[xx][yy] != -1)
                {
                    ans += recur(n-1 , xx , yy);
                }
            }
        }
        
        return dp[n][x][y] = ans;
        
    }

	public:
	lli getCount(int N)
	{
		// Your code goes here
		for(int i = 0 ; i <= 25 ; i ++)
		{
		    for(int j = 0 ; j <= 3 ; j ++)
		    {
		        for(int k = 0 ; k <= 3 ; k ++)
		        {
		            dp[i][j][k] = -1;
		        }
		    }
		}
		
		
		lli ans = 0;
		for(int i = 0 ; i <= 3 ; i ++)
		{
		    for(int j = 0 ; j  < 3;  j ++)
		    {
		        if(mat[i][j] != -1)
		        {
		            ans += recur(N-1 , i ,j);
		        }
		    }
		}
		
		return ans;
	}


};
