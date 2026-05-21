class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;

        for (int i = 1; i < s.length(); i++) {
            if ( (s[i] == s[i-1] || s[i] == s[i-1] - 32 || s[i] == s[i-1] + 32) )
                continue;
            else
                count++;
        }

        return count;
    }
};