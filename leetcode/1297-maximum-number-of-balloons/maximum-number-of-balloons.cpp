class Solution {
public:
    int maxNumberOfBalloons(string text) {
        if (text.size() < 6)
            return 0;

        int count = 0;

        int freq[26] = {0};
        sort(text.begin(), text.end());

        for (int i = 0; i < text.size(); i++) {
            if (text[i] == 'p')
                break;
            freq[text[i] - 'a']++;
        }

        while (freq['b' - 'a'] >= 1 && freq['a' - 'a'] >= 1 &&
               freq['n' - 'a'] >= 1 && freq['l' - 'a'] >= 2 &&
               freq['o' - 'a'] >= 2) {
            count++;
            freq['b' - 'a']--;
            freq['a' - 'a']--;
            freq['l' - 'a']--;
            freq['l' - 'a']--;
            freq['o' - 'a']--;
            freq['o' - 'a']--;
            freq['n' - 'a']--;
        }

        return count;
    }
};