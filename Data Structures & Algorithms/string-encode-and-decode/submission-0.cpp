class Solution {
public:

    string encode(vector<string>& strs) {

        string code = "";
        for (const auto& s : strs) {
            code += to_string(s.size()) + "#" + s;
        }

        return code;
    }

    vector<string> decode(string s) {

        vector<string> ans;
        int i = 0;
        while(i < s.size()) {

            string tmp;
            while (s[i] != '#') {
                tmp += s[i++];
            }
            i++;

            int len = stoi(tmp);
            string res = "";
            int j = 0;
            while (j < len) {
                res += s[i++];
                j++;
            }

            ans.push_back(res);

        }
        return ans;
    }
};
