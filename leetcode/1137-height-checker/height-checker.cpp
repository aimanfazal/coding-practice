class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans = 0;
        vector<int> sortedHeights;
        sortedHeights = heights;
        sort(sortedHeights.begin(), sortedHeights.end());

        for (int i = 0; i < heights.size(); i++) {
            if (sortedHeights[i] != heights[i])
                ans++;
        }

        return ans;
    }
};