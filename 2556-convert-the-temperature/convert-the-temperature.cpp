class Solution {
public:
    vector<double> convertTemperature(double celcius) {
        vector<double> ans;

        // double k = celcius + 273.15;
        // double f = celcius * 1.80 + 32.00;

        ans.push_back(celcius + 273.15);
        ans.push_back(celcius * 1.80 + 32.00);

        return ans;
    }
};