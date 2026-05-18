class Solution {
public:
    int countDigits(int num) {
        int count = 0, digit, test = num;

        while (test > 0) {
            digit = test % 10;
            test = test / 10;

            if (num % digit == 0)
                count ++;
        }

        return count;
    }
};