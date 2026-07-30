class Solution {
public:
    int minimumPushes(string word) {
    
        if (word.size() <= 8)
            return word.size();

        int extraKeys = word.size() - 8;

        if (extraKeys <= 8)
            return 8 + extraKeys * 2;
        else if (extraKeys <= 16)
            return 24 + (extraKeys - 8) * 3;
        else
            return 48 + (extraKeys - 16) * 4;
    }
};