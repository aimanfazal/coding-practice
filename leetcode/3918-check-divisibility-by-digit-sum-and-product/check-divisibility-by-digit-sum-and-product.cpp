class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int pro = 1;
        int t = n;
        while (t) {
            sum += t % 10;
            pro *= t % 10;
            t /= 10;
        }

        if (n % (sum + pro) == 0)
            return true;
        else 
            return false;
    }
};