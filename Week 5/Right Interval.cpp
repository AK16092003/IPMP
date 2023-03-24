#define pii pair<int , int>
#define inf 1e7

class Solution {
public:

    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        multiset<tuple<int , int , int>> data;
        int n = intervals.size();
        for(int i = 0 ; i < n ; i ++)
        {
            data.insert({intervals[i][0] , intervals[i][1] , i});
        }
    vector<int> ans;
        for(int i = 0; i < n ; i ++)
        {
            int x = intervals[i][0];
            int y = intervals[i][1];
            tuple<int , int , int> search;
            search = {y , - inf , -inf};
            auto it = (data.upper_bound(search));
            if(it  == data.end()) 
            {
                ans.push_back(-1); 
                continue;
            }
            tuple<int , int , int> tu = *(it);
            int a , b , c;
            tie(a , b ,c) = tu;
            ans.push_back(c);
        }

        return ans;
    }
};
