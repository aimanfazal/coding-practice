class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sinSum = 0, douSum = 0;

        for (auto x : nums) {
            if (x / 10 == 0)
                sinSum += x;
            else
                douSum += x;
        }

        if (sinSum == douSum)
            return false;
        else
            return true;
    }
};