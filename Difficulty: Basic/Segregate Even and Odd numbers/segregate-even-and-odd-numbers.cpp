class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        // code here
        int odd = 0, even = 0;
        
        for (int i = 0; i < arr.size(); i++)
            if (arr[i] & 1)
                odd++;
            else
                even++;
        
        int i = 0, j = arr.size() - 1;
        
        while (i < j) {
            if (arr[i] & 1) {
                swap(arr[i], arr[j--]);
            }
            else
                i++;
        }
        
        sort(arr.begin(), arr.begin() + even);
        sort(arr.begin() + even, arr.end());
    }
};