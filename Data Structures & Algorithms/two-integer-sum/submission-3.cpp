class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            auto complement = target - nums[i];
            if (mp.contains(complement) && mp[complement] != i) {
                return {mp[complement], i};
            }
            mp.insert({nums[i], i});
        }

        return {};
    }
};
