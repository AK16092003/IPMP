class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here        
          int N = w.length();
          int arr[N];
          
          for(int i = 0 ; i < N ; i ++)
          {
              arr[i] = (w[i] - '\0');
              for(int j = 0 ; j < n ; j ++)
              {
                  if(x[j] == w[i])
                    arr[i] = b[j];
              }
          }
      
          int cur = 0;
          int ans = 0;
          int ind = 0;
          
          for(int i = 0 ; i < N ; i ++)
          {
              cur = max(arr[i] , arr[i] + cur);
              if(ans < cur)
              {
                  ans = cur;
                  ind = i;
              }
          }
         
          string _f = "";
          for(int j = ind ; j >= 0 ; j --)
          {
                ans -= arr[j];
                _f += w[j];
                if(ans == 0) break; 
          }
          reverse(_f.begin() , _f.end());
          return _f;
      }
};
