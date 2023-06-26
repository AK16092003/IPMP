class Solution {
public:
    int numSteps(string s) {
    
        int n = s.length();

        int ans = 0;
        int i = n-1;

        while(i > 0)
        {
            if(s[i] == '0')
            {
                ans++;
                i--;
            }
            else
            {
                ans++;

                for(int j = i ; j >= 0 ; j --)
                {
                    if(s[j] == '1')
                    {
                        s[j] = '0';
                        if(j == 0)
                        {
                            s = '1' + s;
                            i++;
                            break;
                        }
                    }
                    else
                    {
                        s[j] = '1';
                        break;
                    }
                }

            }
        }

        return ans;
    }
};
