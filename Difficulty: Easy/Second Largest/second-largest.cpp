class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int a = INT_MIN;
        
        for (int i = 0; i < arr.size(); i++)
            a = max(a, arr[i]);
            
        
        int b = -1;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] < a)
                b = max(b, arr[i]);
        }
        
        return b;
    }
};