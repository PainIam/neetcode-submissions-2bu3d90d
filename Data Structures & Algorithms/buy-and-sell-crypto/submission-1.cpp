class Solution {
public:
    int maxProfit(vector<int>& prices) {
        

        int mx = 0;


        for (int i = 0; i < prices.size(); i++) {

            int fix = prices[i];
            for (int j = prices.size() - 1; j > i; j--) {
                int curr = prices[j] - fix;
                mx = max(curr, mx);
            }
        }

        return mx;
    }
};
