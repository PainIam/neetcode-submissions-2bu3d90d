class Solution {
public:
    int maxProfit(vector<int>& prices) {
        

        int mx = 0;

        int l = 0, r = 1;
        
        while (r < prices.size()) {

            if (prices[l] < prices[r]) {
                // we buy low and sell high 
                mx = max (mx, (prices[r] - prices[l]));
            } else {
                l = r;
            }
            r++;
        }
        return mx;
    }
};
