class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if (cost.size() == 1)
            return cost[0];

        sort(cost.rbegin(), cost.rend());
        int ans = 0, i = 0;

        for (i = 0; i < cost.size() - 1; i = i + 3)
            ans += cost[i] + cost[i + 1];

        if (i < cost.size())
            ans+= cost[i];

        return ans;
    }
};