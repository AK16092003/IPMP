class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int ans = 0;
        for(char a:columnTitle)
        {
            int d = a - 'A' + 1;
            ans = ans*26 + d;
        }
        return ans;
    }
};
