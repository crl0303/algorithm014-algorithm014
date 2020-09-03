class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        if(n <= 0 || k <= 0 || n < k){
            return res;
        }
        vector<int> arr;
        _generate(n, k, 1, arr);
        return res;
    }
    void _generate(int n, int k, int start, vector<int>& vec) {
        if(vec.size() == k) {
            res.emplace_back(vec);
        }
        for(int i = start; i <= n ; i++) {
            vec.push_back(i);
            _generate(n, k, i+1, vec);
            vec.pop_back();
        }
    }
private:
    vector<vector<int>> res;
};
