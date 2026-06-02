class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        unordered_set<int> st;
        for (int i = 0; i < nums.size();) {
            if (st.find(nums[i]) != st.end())
                nums.erase(nums.begin() + i);
            else
                st.insert(nums[i++]);
        }
        return nums.size();
    }
};