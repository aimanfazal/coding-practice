class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int answer = 0;
       int netGain = answer;

       for (int i = 0; i < gain.size(); i++) {
            netGain += gain[i];
            answer = max(answer, netGain);
       } 

       return answer;
    }
};