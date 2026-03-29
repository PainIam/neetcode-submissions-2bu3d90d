class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        for (const auto& a : nums) {
            mp[a]++;
        }
        
        vector<pair<int, int>> p;
        for (const auto& pair : mp) {
            p.push_back({pair.first, pair.second});
        }

        sort(p.begin(), p.end(), [](const auto& a, const auto& b){
            return a.second > b.second;
        });

        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(p[i].first);
        }

        return res;
    }
};
