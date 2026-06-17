class Solution {
public:
    int passwordStrength(string password) {
        int ans = 0;
        set<char> s;
        for (char& x : password) {

            if (s.find(x) == s.end()) {
                s.insert(x);
                if (x >= 'a' && x <= 'z')
                    ans = ans + 1;
                else if (x >= 'A' && x <= 'Z')
                    ans = ans + 2;
                else if (isdigit(x))
                    ans = ans + 3;
                else
                    ans = ans + 5;
            }
        }
        return ans;
    }
};