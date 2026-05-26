class Solution {
public:
    int signFunc(int x) {
        if (x == 0)
            return 0;
        return x > 0 ? 1 : -1;
    }

    int arraySign(vector<int>& nums) {
        int x = 1;
        for (auto i: nums) {
            if (i != 0)
                i = i > 0 ? 1 : - 1;
            x = x * i;
        }
        return signFunc(x);
    }
};