class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        

        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i - 1] == nums[i]) continue;
            for (int j = i + 1; j < nums.size(); j++) {
                if (j > i + 1 && nums[j - 1] == nums[j]) continue;
                int l = j + 1, r = nums.size() - 1;
                while (l < r) {

                    long long sum = (long long) nums[i] + nums[j] + nums[l] + nums[r];

                    if (sum == target) {

                        res.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;

                        while (nums[l] == nums[l - 1]) {
                            l++;
                        }

                        while (nums[r] == nums[r + 1]) {
                            r--;
                        }
                    }



                    if (sum > target) r--;
                    if (sum < target) l++;
                }
            }
        }

        return res;
    }
};