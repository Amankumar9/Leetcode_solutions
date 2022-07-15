class Solution {
public:
        int res=0,c=0;
        void dfs(vector<vector<int>>& grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0)
        {
          return;
        }
        c++;
        res=max(res,c);
        grid[i][j]=0;
        dfs(grid,i+1,j);
        dfs(grid,i,j-1);
        dfs(grid,i,j+1);
        dfs(grid,i-1,j);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    c=0;
                    dfs(grid,i,j);
                }
            }
        }
        return res;
    }
};