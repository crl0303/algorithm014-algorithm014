class Solution {
public:
vector<string> generateParenthesis(int n) {
        string track;
        vector<string> res;
        backtrack(n, n, track, res);
        return res;
    }
private:
    void backtrack(int remainleftCnt, int remainRightCnt, string& track, vector<string>& res) {
        //终止条件
        if (remainleftCnt == 0 && remainRightCnt == 0) {
            res.push_back(track);
            return;
        }
        if (remainleftCnt < 0 || remainRightCnt < 0 || remainleftCnt > remainRightCnt) {
            return;
        }

        // drill down
        track.push_back('(');
        backtrack(remainleftCnt - 1, remainRightCnt, track, res);
        // 恢复
        track.pop_back();

        // drill down
        track.push_back(')');
        backtrack(remainleftCnt, remainRightCnt - 1, track, res);
        // 恢复
        track.pop_back();
    }