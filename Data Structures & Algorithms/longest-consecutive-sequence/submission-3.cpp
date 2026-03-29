class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.empty()) return 0;
        set<int>set;
        for (const auto& n : nums)
            set.insert(n);
        
        int currSec = 1;
        int longSec = 0;
        for (auto it = set.begin(); it != set.end(); ++it) {
            auto nextIt = next(it);

            if (nextIt != set.end() && *nextIt == *it + 1)
                currSec++;
            else {
                longSec = max(longSec, currSec);
                currSec = 1;
            }
        }

        return max(longSec, currSec);


    }
};
