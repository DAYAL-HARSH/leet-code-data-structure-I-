class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int m = INT_MAX;
        int ans = 0;
       
        for(int i=0; i<n; i++)
        {
            m = min(m, prices[i]);
            ans = max(ans, prices[i]-m);
        }
       
        return ans;
    }
};
