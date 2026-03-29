class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int count = floor(nums.size() / 3);

        unordered_map<int, int> mp;
        for (const auto& n : nums)
            mp[n]++;

        vector<int>res;
        for (const auto& pair : mp) {
            if (pair.second > count)
                res.push_back(pair.first);
        }    
        return res;
    }
};