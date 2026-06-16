class Solution {
public:
    string processStr(string s) {
        string result = "";

        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i]))
                result += s[i];
            else if (s[i] == '*' && result.length() != 0)
                result.erase(result.size() - 1, 1);
            else if (s[i] == '#')
                result.append(result);
            else
                reverse(result.begin(), result.end());
        }

        return result;
    }
};