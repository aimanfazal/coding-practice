class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {
        int res = INT_MAX;

        for (int i = 0; i < landDuration.size(); i++) {
            for (int j = 0; j < waterDuration.size(); j++) {
                int landFinish = landStartTime[i] + landDuration[i];
                int lw = max(landFinish, waterStartTime[j]) + waterDuration[j];
                res = min(res, lw);

                int waterFinish = waterStartTime[j] + waterDuration[j];
                int wl = max(waterFinish, landStartTime[i]) + landDuration[i];
                res = min(res, wl);
            }
        }

        return res;
    }
};