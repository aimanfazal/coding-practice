class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;

        while (i < nums.size() && j >= 0) {
            if (nums[i] == target)
                return i;
            if (nums[j] == target)
                return j;
            i++;
            j--;
        }
    return -1;
    }
};