class Solution {
public:

    vector<int> countSort(vector<int> arr) {

        // 1. Find max element
        int maxVal = -1;
        for (int i = 0; i < arr.size(); i++)
            maxVal = max(arr[i], maxVal);

        // 2. Compute freq of each element
        vector<int> countArr(maxVal+1, 0);
        for (int i = 0; i < arr.size(); i++)
            countArr[arr[i]]++;

        // 3. Calculate prefix sum
        for (int i = 1; i <= maxVal; i++)
            countArr[i] += countArr[i-1];
 
        // 4. Final sorted array: ans
        vector<int> ans(arr.size());
        for (int i = arr.size() - 1; i >= 0; i--) {
            ans[countArr[arr[i]] - 1] = arr[i];
            countArr[arr[i]]--;
        }        

        return ans;

    }

    int maxIceCream(vector<int>& costs, int coins) {
        costs = countSort(costs);

        int answer = 0;

        for (int i = 0; coins > 0 && i < costs.size(); i++) {
            if (costs[i] > 0) {
                coins -= costs[i];
                if (coins >= 0)
                    answer++;
            }
        }

        return answer;
    }
};