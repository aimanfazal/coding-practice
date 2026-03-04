class Solution {
public:
    void inverseRE(string& str, int s) {

        if (s > str.length())
            return;

        if (str[s] == '0')
            str[s] = '1';
        else
            str[s] = '0';

        inverseRE(str, ++s);
    }

    string solution(int n) {

        if (n == 1)
            return "0";

        string c = solution(n - 1);

        string u = c;
        inverseRE(u, 0);
        reverse(u.begin(), u.end());

        return (c + "1" + u);
    }

    char findKthBit(int n, int k) {

        string ans = solution(n);

        return (ans[k - 1]);
    }
};