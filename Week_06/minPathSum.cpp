class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        if(m==0 )
        {
            return 0;
        }
        int col = grid[0].size();
        if(col== 0)
        {
            return 0;
        }
        for(int i=1;i < col ;i++)
        {
            grid[0][i] += grid[0][i-1];
        }
        for(int j=1; j < m ; j++)
        {
            grid[j][0] += grid[j-1][0];
        }
       for(int i = 1;i < m ;i++)
       {
           for(int j = 1;j < col;j++)
           {
                int min = grid[i-1][j]> grid[i][j-1]?grid[i][j-1]:grid[i-1][j];
                grid[i][j]+=min;
           }
       } 
       return grid[m-1][col -1];
    }
};