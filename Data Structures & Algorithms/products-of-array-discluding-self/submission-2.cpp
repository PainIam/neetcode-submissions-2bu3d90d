class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int product = 1, count = 0;
        for (const auto& p : nums) {
            if (p != 0) product *= p;
            else count++;
        }
        
        vector<int>ans;
        for (const auto& n : nums) {
            if (count == 1) {
                if (n == 0) ans.push_back(product);
                else ans.push_back(0);
            } else if (count > 1) {
                ans.push_back(0);
            } else {
                ans.push_back(product / n);
            }
        }
        
        return ans;
    }
};
