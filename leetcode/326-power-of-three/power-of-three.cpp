class Solution {
public:
    bool isPowerOfThree(int n) {
        double x = log(n) / log(3);
        return n > 0 && abs(x - round(x)) < 1e-10;
    }
};