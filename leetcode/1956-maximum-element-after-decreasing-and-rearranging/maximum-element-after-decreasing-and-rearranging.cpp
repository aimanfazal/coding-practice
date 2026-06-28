class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {

        if (arr.size() == 1)
            return 1;

        sort(arr.begin(), arr.end());
        arr[0] = 1;

        for (int i = 0; i < arr.size() - 1; i++) {
            if (abs(arr[i] - arr[i + 1]) > 1)
                arr[i + 1] = arr[i] + 1;
        }

        int ans = INT_MIN;

        for (int i = 0; i < arr.size(); i++)
            ans = max(arr[i], ans);

        return ans;
    }
};