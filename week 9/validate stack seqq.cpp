class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size();

        stack<int> stk;
        int j = 0;

        for(int i = 0 ; i < n ; i ++)
        {
            stk.push(pushed[i]);
            
            while(j<n && stk.size() && stk.top() == popped[j])
            {
                    
                stk.pop();
                j++;
            }
        }

        return j == n;
    }
};
