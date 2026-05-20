class Solution {
public:
    void solve(vector<string>& ans, string temp, int index, string digits, unordered_map<int, string> mapping) {
        if (index == digits.length()) {
            ans.push_back(temp);
            return;
        }

        int digit = digits[index] - '0';
        string value = mapping[digit];
        for (int i = 0; i < value.length(); i++) {
            temp.push_back(value[i]);
            solve(ans, temp, index + 1, digits, mapping);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        int index = 0;
        vector<string> ans;
        string temp = "";

        unordered_map<int, string> mapping = {
            {2, "abc"}, {3, "def"},  {4, "ghi"}, {5, "jkl"},
            {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}};

        solve(ans, temp, index, digits, mapping);
        return ans;
    }
};