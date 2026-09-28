class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res = nums;

        ranges::for_each(nums, [&res](const auto& a){
            res.push_back(a);
        });

        return res;
    }
};