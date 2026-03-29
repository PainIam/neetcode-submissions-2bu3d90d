class Solution {
public:
    bool isAnagram(string s, string t) {
        

        if (s.size() != t.size()) return false;
        vector<int>res(26, 0);
        for (int i = 0; i < s.size(); i++) {

            res[s[i] - 'a']++;
            res[t[i] - 'a']--;
        }

        for (const auto& val : res) {

            if (val != 0) return false;
        }

        return true;

    }
};
