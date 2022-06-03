class NumMatrix {
public:
        vector<vector<int>>v;
        NumMatrix(vector<vector<int>>& mat) {
        v=mat;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=1;j<mat[0].size();j++)
            {
                    v[i][j]+=v[i][j-1];
            }
        }
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        int sum=0;
        for(int i=r1;i<=r2;i++)
        {
           sum+=v[i][c2];
           if(c1>0)
               sum-=v[i][c1-1];
        }
        return sum;
    }
};


/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */