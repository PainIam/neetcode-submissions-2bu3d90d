class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        vector<int> ans;
        ans = nums;

        int len = nums.size();
        for (int i = 0; i < len; i++) {
            ans.push_back(ans[i]);
        }

        return ans;
    }
};