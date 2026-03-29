class Solution {
public:
    bool validPalindrome(string s) {
        
        // int pointer = 0;
        for (int i = 0; i < s.size(); i++) {

            char ch = s[i];
            string c = "";
            for (int j = 0; j < s.size(); j++) {
                if (s[j] != ch) c += s[j];
            }
            string rev = c;
            reverse(c.begin(), c.end());
            if (c == rev) return true;
        }
        return false;
    }
};