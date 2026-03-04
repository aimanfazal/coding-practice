class Solution {
public:
    void solutionRE(string& num1, int p1, string& num2, int p2, string& ans,
                    int& carry) {
        // base case
        if ((p1 < 0 && p2 < 0) && carry == 0)
            return;
        // solution
        int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
        int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
        int sum = n1 + n2 + carry, digit;
        carry = sum / 10;
        digit = sum % 10;

        // recursive call
        solutionRE(num1, --p1, num2, --p2, ans, carry);
        ans.push_back(digit + '0');
    }

    string addStrings(string num1, string num2) {
        int p1, p2, carry = 0;
        p1 = num1.length() - 1;
        p2 = num2.length() - 1;
        string ans = "";

        solutionRE(num1, p1, num2, p2, ans, carry);
        return ans;
    }
};