class Solution {
public:
    bool judgeCircle(string moves) {
        int i = 0, j = 0;

        for (auto x: moves) {
            if (x == 'U')
                j++;
            else if (x == 'D')
                j--;
            else if (x == 'L')
                i--;
            else
                i++;
        }

        if (i == 0 && j == 0)
            return true;
        else return false;
    }
};