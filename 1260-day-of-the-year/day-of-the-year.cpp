class Solution {
public:
    bool checkYear(int n) {
        if (n % 4 == 0) {
            if (n % 100 == 0) {
                return n % 400 == 0;
            }
            return true;
        }
        return false;
    }

    int dayOfYear(string date) {
        int y = stoi(date.substr(0, 4));
        int m = stoi(date.substr(5, 2));
        int d = stoi(date.substr(8, 2));

        int total = d;

        for (int i = 1; i < m; i++) {
            if (i == 2) {
                if (checkYear(y))
                    total += 29;
                else
                    total += 28;
            } else if (i == 4 || i == 6 || i == 9 || i == 11)
                total += 30;
            else
                total += 31;
        }
        return total;
    }
};