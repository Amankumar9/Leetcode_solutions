class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        for(int i=0;i<numRows;i++)
        {
            vector<int>currow;
            for(int j=0;j<=i;j++)
            {
             if(j==0 || j==i)
              currow.push_back(1);
             else
              currow.push_back(v[i-1][j-1]+v[i-1][j]);
            }
          v.push_back(currow);
        }
        return v;
    }
};