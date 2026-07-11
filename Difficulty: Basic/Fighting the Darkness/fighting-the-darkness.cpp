class Solution {
  public:
    int maxDays(vector<int> &arr) {
        // code here
        int ans = INT_MIN;
        
        for (auto x: arr)
            ans = max(ans, x);
            
        return ans;
    }
};