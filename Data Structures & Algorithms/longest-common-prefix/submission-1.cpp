class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {


        auto mn = min_element(strs.begin(), strs.end(), [](const string& a, const string& b) {

            return a.size() < b.size();
        });

        int mnLen = mn->size();

        string res = "";
        for (int i = 0; i < mnLen; i++) {

            char c = strs[0][i]; // first str in strs
            for (int j = 1; j < strs.size(); j++) {

                if (strs[j][i] != c) return res;
            }
            res += c;
        }

        return res;


    }
};