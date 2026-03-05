class Solution {
public:
  int reverse(int x) {

    if (x <= INT_MIN)
      return 0;

    int res = abs(x);
    int ans = 0;

    while (res > 0) {
      if (ans > INT_MAX / 10)
        return 0;

      ans = (ans * 10 + res % 10);
      res = res / 10;
    };
    // checks if given integer is positive or negative
    return ((x > 0) ? ans : -ans);
  }
};