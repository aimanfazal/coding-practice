class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> answer;
        deque<int> dq;

        for (int i = 0; i < nums.size(); i++) {

            // check for smaller elements:
            while (!dq.empty() && nums[i] >= nums[dq.back()])
                dq.pop_back();
            // check for out of window elements:
            while (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();
            dq.push_back(i);

            // store answer after the first window:
            if (i >= k - 1)
                answer.push_back(nums[dq.front()]);
        }
        return answer;
    }
};