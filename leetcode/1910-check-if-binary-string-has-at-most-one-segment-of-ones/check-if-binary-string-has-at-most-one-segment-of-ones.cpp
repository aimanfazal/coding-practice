class Solution {
public:
    bool checkOnesSegment(string s) {

        int i = 0;
        // checks the first segmemt
        while (s[i] == '1')
            i++;
        // returns true if traversed the entire string
        if (i == s.length())
            return true;

        // '0' found! Inverse traversing while finding '0's
        int j = s.length() - 1;
        while (s[j] == '0')
            j--;

        return i > j ? true : false;
    }
};