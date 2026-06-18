class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0;
        int expense = 0;
        int fuel = 0;

        for (int i = 0; i < gas.size(); i++) {
            fuel += gas[i] - cost[i];

            if (fuel < 0) {
                expense += abs(fuel);
                fuel = 0;
                start = i+1;
            }
        }

        return fuel >= expense ? start : -1;
    }

};