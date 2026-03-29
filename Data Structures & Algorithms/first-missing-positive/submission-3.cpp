class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        

        sort(nums.begin(), nums.end());
        int miss = 1;
        for (const auto& i : nums) {
            if (i >= 1 && i == miss) miss++;
        }
        return miss;


    }
};