class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++)
        {
            int l1=upper_bound(grid[i].rbegin(),grid[i].rend(),-1)-grid[i].rbegin();
            res+=l1;
        }
        return res;
    }
};