class Solution {

private:
    void solution(vector<int> &nums, vector<int> temp, int idx, vector<vector<int>> &result) {
        if (idx == nums.size()) {
            result.push_back(temp);
            return;
        }

        temp.push_back(nums[idx++]);
        solution(nums, temp, idx, result);
        temp.pop_back();
        solution(nums, temp, idx, result);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;

        solution(nums, temp, 0, result);

        return result;
    }
};