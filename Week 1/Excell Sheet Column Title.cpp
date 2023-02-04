class Solution {
public:
    string convertToTitle(int columnNumber) 
    {
        string ans = "";
        while(columnNumber)
        {
            int d = columnNumber%26;
            if(d == 0)
            {
                char c = 'Z';
                ans = c + ans;
                columnNumber/=26;
                columnNumber--;
            }
            else
            {
                char c = d + 'A' - 1;
                ans = c + ans;
                columnNumber/=26;
            }
        }
        return ans;
    }
};
