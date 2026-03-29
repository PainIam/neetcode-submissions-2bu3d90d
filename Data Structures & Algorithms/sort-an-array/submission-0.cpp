class Solution {

    void mergeSort(vector<int>& nums) {

        int len = nums.size();
        if (len <= 1) return;
        
        int mid = nums.size() / 2;
        vector<int> larr(mid, 0);
        vector<int> rarr(len - mid, 0);

        for (int i = 0, l = 0, r = 0; i < len; i++) {
            if (l < larr.size()) {
                larr[l] = nums[i];
                l++;
            } else {
                rarr[r] = nums[i];
                r++;
            }
        }

        mergeSort(larr);
        mergeSort(rarr);
        merge(larr, rarr, nums);
    }

    void merge(vector<int>&larr, vector<int>&rarr, vector<int>& arr) {

        int l = 0, r = 0, i = 0;
        int lsize = larr.size();
        int rsize = rarr.size();

        while (l < lsize && r < rsize) {
            if (larr[l] < rarr[r]) {
                arr[i] = larr[l];
                i++;
                l++;
            } else {
                arr[i] = rarr[r];
                i++;
                r++;
            }
        }

        while (l < lsize) {
            arr[i] = larr[l];
            i++;
            l++;
        }

        while (r < rsize) {
            arr[i] = rarr[r];
            i++;
            r++;
        }
    }

public:
    vector<int> sortArray(vector<int>& nums) {

        mergeSort(nums);
        return nums;
    }
};