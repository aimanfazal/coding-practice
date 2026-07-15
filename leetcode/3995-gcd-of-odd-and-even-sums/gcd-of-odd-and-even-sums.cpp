class Solution {

private:
    int findGCD(int a, int b) {
        if (!b)
            return a;

        return findGCD(b, b%a);
    }

public:
    int gcdOfOddEvenSums(int n) {
      
    if (n==1)
    return 1;
    int odd = n*n;
    int even = n*(2*n+1);

    return findGCD(odd, even);
        
    }
};