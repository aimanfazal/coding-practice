class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int i = 0;

        while (i < n) {
            int fuel = 0;
            int j = 0;

            while (j < n) {
                int idx = (i + j) % n;
                fuel += gas[idx] - cost[idx];

                if (fuel < 0)
                break;

                j++;
            }

            if (j==n)
                return i;

            i += j+1;
        }
        
        return -1;
    }
};