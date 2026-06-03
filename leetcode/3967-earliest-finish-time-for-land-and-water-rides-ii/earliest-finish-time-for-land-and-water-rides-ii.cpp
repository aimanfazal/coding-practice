class Solution {
public:
    int waterToLand(vector<int>& landStartTime, vector<int>& landDuration,
                    vector<int>& waterStartTime, vector<int>& waterDuration) {
        int finishTime = INT_MAX;
        for (int i = 0; i < waterDuration.size(); i++)
            finishTime = min(finishTime, waterStartTime[i] + waterDuration[i]);
        int res = INT_MAX;
        for (int i = 0; i < landDuration.size(); i++) {
            int remaining = max(finishTime, landStartTime[i]) + landDuration[i];
            res = min(res, remaining);
        }

        return res;
    }

    int landToWater(vector<int>& landStartTime, vector<int>& landDuration,
                    vector<int>& waterStartTime, vector<int>& waterDuration) {
        int finishTime = INT_MAX;
        for (int i = 0; i < landDuration.size(); i++)
            finishTime = min(finishTime, landStartTime[i] + landDuration[i]);
        int res = INT_MAX;
        for (int i = 0; i < waterDuration.size(); i++) {
            int remaining =
                max(finishTime, waterStartTime[i]) + waterDuration[i];
            res = min(res, remaining);
        }

        return res;
    }

    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

                            int lw = landToWater(landStartTime, landDuration, waterStartTime, waterDuration);
                            int wl = waterToLand(landStartTime, landDuration, waterStartTime, waterDuration);
                            return min(lw, wl);
                           }
};