class Solution {
public:
    int countDigits(int num) {
        int count = 0, test = num;

        while (test > 0) {
            if (num % (test % 10) == 0)
                count ++;

            test = test / 10;
        }

        return count;
    }
};