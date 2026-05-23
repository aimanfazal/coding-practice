class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    unordered_map<int, int> s;

    for (int i = 0; i < nums.size(); i++) {
        int comp = target - nums[i];
        if ( s.find(comp) != s.end()) {
            ans.push_back(s[comp]);
            ans.push_back(i);
        }
        else
            s[nums[i]] = i;            
    }

    return ans;

    }
};