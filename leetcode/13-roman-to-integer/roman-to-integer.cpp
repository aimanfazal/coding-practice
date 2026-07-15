class Solution {
public:
    unordered_map<char, int> symbols = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int romanToInt(string s) {

        int answer = 0;

        for (int i = 0; i < s.size(); i++) {

            if (i + 1 < s.size())
                if (symbols[s[i]] >= symbols[s[i + 1]])
                    answer += symbols[s[i]];
                else
                    answer -= symbols[s[i]];
            else
                answer += symbols[s[i]];
        }

        return answer;
    }
};