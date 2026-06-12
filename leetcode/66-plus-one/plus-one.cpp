class Solution {
public:

    void helper(vector<int>& digits, int i) {
        if (i == 0 && digits[i] == 9) {
            digits[i] = 0;
            digits.insert(digits.begin() + i, 1);
            return;
        }

        if (digits[i] != 9) {
            digits[i]++;
            return;
        }

        digits[i] = 0;
        helper(digits, --i);
    }

    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();

        if (digits[size - 1] != 9) {
            digits[size - 1]++;
            return digits;
        }

        helper(digits, size - 1);

        return digits;
    }
};