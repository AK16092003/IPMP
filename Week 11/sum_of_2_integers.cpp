class Solution {
public:
    int getSum(int a, int b) {

        while(b!=0)
        {
            int c = (a&b);
            a ^= c;
            b ^= c;
            a ^= b;
            b = 0;
            b = (c << 1);
        }
        return a;

    }
};
