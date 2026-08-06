class Solution {

private:
    int proDigit(int n) {

        int pro = 1;

        while (n) {
            int d = n % 10;
            pro *= d;
            n = n / 10;
        }

        return pro;
    }


public:
    int smallestNumber(int n, int t) {
        
        while (1) {
            if (proDigit(n) % t == 0)
                return n; 
            n++;
        }

        return 1;
    }
};