class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        

        unordered_map<char, int> map;
        int l = 0, r = 0;
        int mx = 0;
        while (r < s.size()) {

            if (map.count(s[r])) {
                l = max (l, map[s[r]] + 1);
            }

            mx = max(mx, r - l + 1);
            map[s[r]] = r;
            r++;

        }

        return mx;

    }
};
