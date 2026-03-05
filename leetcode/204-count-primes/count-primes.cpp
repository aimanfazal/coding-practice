class Solution {
public:
    int countPrimes(int n) {
        
        if (n == 0 || n == 1)
            return 0;

        vector<bool> data(n, true);
        data[0] = data[1] = false;
        int ans = 0;

        for (int i = 2; i < n; i++) {
            if (data[i]) {
                ans++;
                int j = i * 2;
                while (j < n) {
                    data[j] = false;
                    j += i;
                }
            }
        }
        return ans;
    }
};