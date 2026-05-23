class Solution {
public:
    void rotateArray(vector<int>& arr, int d) {
        reverse(arr.begin(), arr.end());
        reverse(arr.begin(), arr.begin() + d - 1);
        reverse(arr.begin() + d, arr.end());
    }

    bool checkSorting(vector<int>& arr) {
        for (int i = 0; i < arr.size() - 1; i++)
            if (arr[i] > arr[i + 1])
                return false;
        return true;
    }

    bool check(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++) {
            rotateArray(nums, 1);
            if (checkSorting(nums))
                return true;
        }

        return false;
    }
};