class Solution {
private:
    void dfs(int begin, int len, vector<int>& nums, vector<vector<int>>& res) {
        if(begin == len) {
            res.emplace_back(nums);
        }
        for (int i = begin; i < len; i++) {
            swap(nums[i], nums[begin]);
            dfs(begin + 1, len, nums, res);
            swap(nums[i], nums[begin]);
        }

    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        dfs(0, (int)nums.size(), nums, res);
        return res;
    }
};
