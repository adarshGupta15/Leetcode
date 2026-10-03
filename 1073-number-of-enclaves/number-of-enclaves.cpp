class Solution {
public:
    int m,n;
    void dfs(vector<vector<int>>&grid,int i,int j){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0)
            return;
        grid[i][j]=0;
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);    
    }
    int numEnclaves(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();



        // first col and last col par dfs
        for(int row=0;row<m;row++){
            // first col par dfs
            if(grid[row][0]==1){
                dfs(grid,row,0);
            }
            //last col
            if(grid[row][n-1]==1){
                dfs(grid,row,n-1);
            }
        }

        // first row and last row par dfs
        for(int col=0;col<n-1;col++){
            //first row
            if(grid[0][col]==1){
                dfs(grid,0,col);
            }
            //last row
            if(grid[m-1][col]==1){
                dfs(grid,m-1,col);
            }
        }
        int count=0;
        //count 1s
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) count++;
            }
        }
        return count;
    }
};