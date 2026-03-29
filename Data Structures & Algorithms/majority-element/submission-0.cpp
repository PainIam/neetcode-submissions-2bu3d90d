class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int mn = floor(nums.size() / 2);
        unordered_map<int, int> frq;

        for (auto& num : nums) {
            frq[num]++;
        }

        for (auto pair : frq) {

            if (pair.second > mn)
                return pair.first;
        }

    }
};