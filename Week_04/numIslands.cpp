class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i = 0; i < grid.size(); ++i) {
            for(int j = 0; j < grid[i].size(); ++j) {
                if(grid[i][j] == '1') {
                   count++;
                   dfs(grid, i, j); 
                }
            }
        }
        return count;
    }
    void dfs(vector<vector<char>>& grid, int i, int j) {
        // 递归的终止条件，岛屿不在范围内，或者改点不是岛屿
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != '1') {
               return;
        }
        grid[i][j] = '0';
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
        return;
    }
};
