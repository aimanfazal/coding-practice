class Solution {
public:

    int findWaviness(int n) {
        if (ceil(log10(n)) < 3)
            return 0;
        
        string s = to_string(n);
        int peak = 0, vall = 0;

        for (int i = 1; i < s.length() - 1; i++) {
            if (s[i] > s[i+1] && s[i] > s[i-1])
                peak++;
            else if (s[i] < s[i+1] && s[i] < s[i-1])
                vall++;
        }

        return peak + vall;
    }
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for (int i = num1; i <= num2; i++)
            ans += findWaviness(i);
        return ans;
    }
};