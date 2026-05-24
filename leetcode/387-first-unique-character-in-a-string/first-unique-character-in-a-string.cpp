class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> m;

        for (int i = 0; i < s.length(); i++) {
            if (m.find(s[i]) != m.end()) {
                m[s[i]]++;
            }
            else {
                m.emplace(s[i], 1);
            }
        }

        for (int i = 0; i < s.length(); i++) 
            if (m[s[i]] == 1)
                return i;
        return -1;
    }
};