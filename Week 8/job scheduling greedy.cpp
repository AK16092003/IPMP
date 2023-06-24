
class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        
        int j = 0 , profit = 0;
        vector<pair<int , int>> data;
        
        for(int i = 0 ; i < n ; i ++)
        {
            data.push_back({arr[i].profit , arr[i].dead});
        }
        
        sort(data.begin() , data.end());
        reverse(data.begin() , data.end());
        
        set<int> empty;
        for(int i = 1 ; i <= n ; i ++) empty.insert(i);
        
        for(int i = 0 ; i < n ; i ++)
        {
            auto it = empty.upper_bound(data[i].second);
            if(it == empty.begin())
            {
                
            }
            else
            {
                it = prev(it);
                int ind = *(it);
                j++;
                profit += data[i].first;
                empty.erase(it);
            }
        }
        
        
        return {j , profit};
    } 
};
