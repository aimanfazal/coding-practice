class Solution {
public:
    int sumFinder(vector<int> code, int index, int k) {
        int i = 0;
        int sum = 0;
        // Case 1: k = 0
        if (k == 0)
            return sum;
        // Case 2: K > 0
        else if (k > 0) {
            while (i < k) {
                sum += code[(++index) % code.size()];
                i++;
            }
            return sum;
        }
        // Case 3: k < 0
        else {
            
            while (i < abs(k)) {
                index--;
                index = index < 0 ? code.size() - 1 : index;
                sum += code[index];
                i++;
            }
            return sum;
        }
    }

    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> answer;
        for (int i = 0; i < code.size(); i++)
            answer.push_back(sumFinder(code, i, k));

        return answer;
    }
};