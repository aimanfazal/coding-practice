class Solution {
public:

    int minFinder(vector<int>& nums) {

        int minNum = INT_MAX;
        int minIndex = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < minNum) {
                minNum = nums[i];
                minIndex = i;
            }
        }

        nums.erase(nums.begin() + minIndex);
        return minNum;
    }

    vector<int> numberGame(vector<int>& nums) {
        int alice, bob;
        vector<int> arr;

        while (nums.size() != 0) {
            alice = minFinder(nums);
            bob = minFinder(nums);

            arr.push_back(bob);
            arr.push_back(alice);
        }

        return arr;
    }
};