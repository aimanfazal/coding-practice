class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;

        for (int i = 1; i < num; i++) {
            if (sum > num)
                return false;
            if (num % i == 0)
                sum+= i;
        }

        return num == sum ? true : false;
    }
};