class Solution {
public:
    bool checkIfPangram(string sentence) {
        for (int i = 0; i < 26; i++)
            if (sentence.find( char(i+97) ) == string::npos)
                return false;
        return true;
    }
};