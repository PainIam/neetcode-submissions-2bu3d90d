class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> freq;
        for (const auto& n : nums) {
            freq[n]++;
        }

        vector<pair<int, int>> p;
        for (const auto& pair : freq) {
            p.push_back({pair.second, pair.first});
        }

        sort(p.rbegin(), p.rend());
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(p[i].second);
        }

        return res;
        
    }
};
