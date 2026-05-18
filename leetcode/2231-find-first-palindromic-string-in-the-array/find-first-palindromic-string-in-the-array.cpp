class Solution {
public:
    bool checkPalindrome(string str) {
        int i = 0, j = str.size() - 1;
        while (i < j) {
            if (str[i] != str[j] )
                return false;
            i++;
            j--;    
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++)
            if (checkPalindrome(words[i])) 
                return words[i];
        return "";
    }
};