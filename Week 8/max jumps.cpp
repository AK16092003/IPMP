class Solution {
  public:
    int canReach(int A[], int N) {
        // code here
        
        
        int reach = A[0];
        int steps = A[0];
        int jumps = 0;
        
        if(N == 1) return 1;
        if(reach == 0) return 0;
        
        
        for(int i = 0 ; i < N ; i ++)
        {
            reach = max(reach , A[i] + i);
            steps--;
            
            if(steps == 0)
            {
                if(reach == i && i != N-1) return 0;
                jumps++;
                steps = reach - i;
            }
        }
        
        return 1;
        
    }
};
