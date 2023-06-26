class Solution {
public:
    bool isPowerOfFour(int n) {
        return __builtin_popcountl(n) == 1 && __builtin_ctz(n)%2==0;
    }
};
