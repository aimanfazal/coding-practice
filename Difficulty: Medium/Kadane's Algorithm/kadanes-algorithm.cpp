class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int ms = INT_MIN;
        int cs = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            cs += arr[i];
            ms = max(ms, cs);
            
            if (cs < 0)
            cs = 0;
        }
        
        return ms;
    }
};