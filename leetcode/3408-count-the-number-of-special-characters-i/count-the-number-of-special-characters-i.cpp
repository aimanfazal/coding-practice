class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ans = 0;
        set<char> upper, lower;

        for (char ch : word) {
            if (isupper(ch))
                upper.insert(ch);
            else
                lower.insert(ch);
        }

        for (char ch : upper)
            if (lower.count(tolower(ch)))
                ans++;
        return ans;
    }
};
