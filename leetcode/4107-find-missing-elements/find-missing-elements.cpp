class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
      int lower = INT_MAX;
      int upper = INT_MIN;
      set<int> st;

      for (auto x: nums) {
        st.insert(x);
        if (x > upper)
            upper = x;
        if (x < lower)
            lower = x;
      }

      vector<int> data;

      for (int i = lower; i <= upper; i++)
        if (st.find(i) == st.end())
            data.push_back(i);

        return data;
    }
};