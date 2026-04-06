class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        

        int mx = 0;
        int l = 0, r = 0;
        unordered_map<int, int> map;
        while (r < s.size()) {

            if (map.count(s[r])) {
                l = max (l, map[s[r]] + 1);
            } else {}
            map[s[r]] = r;
            mx = max(mx, r - l + 1);
            r++;
        }

        return mx;
    }
};
