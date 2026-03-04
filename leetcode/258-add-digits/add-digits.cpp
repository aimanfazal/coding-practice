class Solution {
public:
    int recSolution(int& num, int sum) {

        if (num == 0) {
            if (sum >= 0 && sum <= 9)
                return sum;
            else {
                num = sum;
                sum = 0;
            }
        }
        sum += num % 10;
        num = num / 10;
        return recSolution(num, sum);
    }
    int addDigits(int num) {

        int sum = 0;
        return recSolution(num, sum);
    }

    // this is the initial phase
};