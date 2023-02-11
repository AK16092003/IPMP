class Solution {
public:
    int subarraysWithKDistinct(vector<int>& a, int k) {
        int ans = 0;
        int numdist  = 0;
        map<int , int> frq;

        int n = a.size();
        int l = 0;

        for(int r = 0 ; r < n ; r ++)
        {
            frq[a[r]]++;
            if(frq[a[r]] == 1) numdist++;

            while(numdist > k)
            {
                frq[a[l]]--;
                if(frq[a[l]] == 0) numdist--;
                l++;
            }
            if(numdist <= k)
            {
                ans += r - l + 1;
            }
        }

        //cout << ans << " ";
        frq.clear();
        numdist = 0;
        l = 0;
        k--;

         for(int r = 0 ; r < n ; r ++)
        {
            frq[a[r]]++;
            if(frq[a[r]] == 1) numdist++;

            while(numdist > k)
            {
                frq[a[l]]--;
                if(frq[a[l]] == 0) numdist--;
                l++;
            }
            if(numdist <= k)
            {
                ans -= r - l + 1;
            }
        }
    //cout << ans << endl;
    return ans;


    }
};
