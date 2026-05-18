class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int count = 0;
       int maxWord = INT_MIN;

       for (int i = 0; i < sentences.size(); i++) {
        
        count = 0;

        for (int j = 0; j < sentences[i].size(); j++) {
            if (sentences[i][j] == ' ')
                count++;
        }

        count++;

        if (maxWord < count)
            maxWord = count;
       } 

       return maxWord;
    }
};