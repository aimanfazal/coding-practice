class Solution {
public:
    bool isPalindrome(string s) {

        for (int i = 0; i < s.length(); i++) {
            if (isupper(s[i]))
                s[i] = tolower(s[i]);
            else if ( !(isalnum(s[i])) ) {
                s.erase(s.begin() + i);
                i--;
            }
        }

        int i = 0, j = s.length() - 1;

        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};