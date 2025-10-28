class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> d;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];

            while (!d.empty() && d.back() < num) {
                d.pop_back();
            }
            d.push_back(num);

            if (i >= k && nums[i - k] == d.front()) {
                d.pop_front();
            }

            if (i >= k - 1) {
                res.push_back(d.front());
            }
        }

        return res;        
    }
};