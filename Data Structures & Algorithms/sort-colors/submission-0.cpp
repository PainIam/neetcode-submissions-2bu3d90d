class Solution {

    void mergeSort(vector<int>& arr) {

        if (arr.size() <= 1) return;
        int len = arr.size();
        vector<int> larr(len / 2, 0);
        vector<int> rarr(len - larr.size(), 0);

        for (int i = 0, l = 0, r = 0; i < len; i++) {
            if (l < larr.size()) {
                larr[l] = arr[i];
                l++;
            } else {
                rarr[r] = arr[i];
                r++;
            }
        }

        mergeSort(larr);
        mergeSort(rarr);
        merge(larr, rarr, arr);
    }

    void merge(vector<int>& larr, vector<int>&rarr, vector<int>& arr) {

        int i = 0, l = 0, r = 0;
        while (l < larr.size() && r < rarr.size()) {

            if (larr[l] < rarr[r]) {
                arr[i] = larr[l];
                l++;
                i++;
            } else {
                arr[i] = rarr[r];
                r++;
                i++;
            }
        }

        while (l < larr.size()) {

            arr[i] = larr[l];
            l++;
            i++;      
        }

        while (r < rarr.size()) {

            arr[i] = rarr[r];
            r++;
            i++;
        }
    }
public:
    void sortColors(vector<int>& nums) {
        mergeSort(nums);
    }
};