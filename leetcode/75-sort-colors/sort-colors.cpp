class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int end = size - 1;

        for (int i = 0; i <= end;){
            if (nums[i] == 2) {
                swap(nums[i], nums[end]);
                end--;
            }
            else
            i++;
        }

          for (int i = 0; i <= end;){
            if (nums[i] == 1) {
                swap(nums[i], nums[end]);
                end--;
            }
            else
            i++;
        }
    }
};