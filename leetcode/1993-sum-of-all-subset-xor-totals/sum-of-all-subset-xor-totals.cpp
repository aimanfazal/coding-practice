class Solution {

private:
    void subset(vector<vector<int>> &result, vector<int> src, vector<int> temp, int idx) {
        if (idx == src.size()) {
            result.push_back(temp);
            return;
        }

        temp.push_back(src[idx++]);
        subset(result, src, temp, idx);
        temp.pop_back();
        subset(result, src, temp, idx);
    }

    int findXOR(vector<int> data) {
        
        if (!data.size())
            return 0;

        int sum = data[0];
        
        if (data.size() == 1)
            return sum;

        for (int i = 1; i < data.size(); i++)
            sum = sum ^ data[i];
        
        return sum;
    }

public:
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;

        subset(result, nums, temp, 0);

        int answer = 0;

        for (auto x: result) {
            answer += findXOR(x);
        }

        return answer;
    }
};