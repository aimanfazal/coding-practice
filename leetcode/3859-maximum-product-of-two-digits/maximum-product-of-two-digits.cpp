class Solution {

public:
    int maxProduct(int n) {
        int size = floor(log10(n) + 1);
        vector<int> data(size);

        for (int i = 0; i < size; i++) {
            data[i] = n % 10;
            n /= 10;
        }

        sort(data.rbegin(), data.rend());

        return data[0] * data[1];
    }
};