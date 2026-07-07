class Solution {
public:
    long long sumAndMultiply(int n) {

        if (n == 0)
            return 0;

        string given = to_string(n);
        string x = "";
        long long sum = 0;
        for (auto ch : given) {
            if (ch - '0' != 0)
                x = x + ch;
            sum += (ch - '0');
        }

        return sum * stoi(x);
    }
};