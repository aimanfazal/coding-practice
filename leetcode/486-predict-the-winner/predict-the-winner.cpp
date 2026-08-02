class Solution {

private:
    int currPlayAdv(vector<int> &data, int l, int r) {
        if (l == r)
            return data[l];

        int leftChoice = data[l] - currPlayAdv(data, l+1, r);
        int rightChoice = data[r] - currPlayAdv(data, l, r-1);

        return max(leftChoice, rightChoice);
    }

public:
    bool predictTheWinner(vector<int>& nums) {
        return currPlayAdv(nums, 0, nums.size()-1) >= 0;
    }
};