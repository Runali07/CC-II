class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int h = 0;
        int sum = 0;
        int ans = INT_MAX;
        while (h < nums.size()) {
            sum += nums[h];
            while (sum >= target) {
                ans = min(ans, h - l + 1);
                sum -= nums[l];
                l++;
            }
            h++;
        }
        return ans == INT_MAX ? 0 : ans;
    }
};