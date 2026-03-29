class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        

        int l = 1;
        sort(nums.begin(), nums.end());
        for (const auto& val : nums) {

            if (l == val) l++;
        }

        return l;
    }
};