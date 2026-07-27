class Solution {
public:
    void solve(vector<int>& nums, int index, vector<int>& arr, vector<vector<int>>& ans) {
        if (index == nums.size()) {
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[index]);
        solve(nums, index + 1, arr, ans);
        arr.pop_back();
        solve(nums, index + 1, arr, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;
        solve(nums, 0, arr, ans);
        return ans;
    }
};