class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";

        for (int i = 0; i < words.size(); i++) {
            int sum = 0;
            for (int j = 0; j < words[i].length(); j++) {
                int charIndex = int(words[i][j]) - 97;
                sum += weights[charIndex];
            }
            sum = 122 - (sum % 26);

            ans = ans + char(sum);
        }

        return ans;
    }
};