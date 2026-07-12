class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if (!arr.size())
            return {};

        set<int> st(arr.begin(), arr.end());

        unordered_map<int, int> ranks;
        int rank = 1;

        for (auto x: st)
            ranks[x] = rank++;

        for (int i = 0; i < arr.size(); i++)
            arr[i] = ranks[arr[i]];

        return arr;
    }
};