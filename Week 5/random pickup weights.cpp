class Solution {
public:
    vector<int> pref;
    int n;
    
    Solution(vector<int>& w) 
    {
        pref.push_back(w[0]-1);
        n = w.size();
        int last = w[0];
        for(int i = 1 ; i < n ; i ++)
        {
            last += w[i];
            pref.push_back(last-1);
        }
    }
    
    int pickIndex() {
        int index = rand()%(pref[n-1]+1);
        return lower_bound(pref.begin() , pref.end() , index) - pref.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
