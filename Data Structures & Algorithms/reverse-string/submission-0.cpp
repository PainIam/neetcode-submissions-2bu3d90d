class Solution {
public:
    void reverseString(vector<char>& s) {

        int l = s.size();
        for (int i = 0; i < s.size() / 2; i++) {
            char x = s[i], y = s[l - i - 1];
            char tmp = y;
            s[l - i - 1] = x;
            s[i] = tmp;
        }   
    }
};