class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> sF;
        unordered_map<char, int> tF;
        for (int i = 0; i < s.size(); i++) {
            sF[s[i]]++;
            tF[t[i]]++;
        }

        return sF == tF;
    }
};
