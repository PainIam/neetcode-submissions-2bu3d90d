class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        set<int> st;
        for (const auto& n : nums) {
            st.insert(n);
        }

        return nums.size() != st.size();
    }
};