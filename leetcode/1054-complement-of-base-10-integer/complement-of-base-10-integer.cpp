class Solution {
public:
    int bitwiseComplement(int n) {

        if (n == 0)
            return 1;
        
        string num = "";

        // binary conversion
        while (n > 0) {
            int bit = n & 1;
            num = to_string(bit) + num;
            n = n >> 1;
        }

        // complementing the binary
        for (int i = 0; i < num.length(); i++)
            num[i] = num[i] == '0' ? '1' : '0';

        n = 0;

        for (int i = num.length() - 1, k = 0; i >= 0; i--) {
            n += pow(2, k++) * ( num[i] - '0');
        }

        return n;
        

    }
};