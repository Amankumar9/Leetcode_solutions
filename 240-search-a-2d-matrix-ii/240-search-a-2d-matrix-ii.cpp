class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() - 1;       
        int row = m, col = 0;
        while(row >= 0 && col < matrix[0].size()){
            if(matrix[row][col]==target)
               return true;
            else if(matrix[row][col] > target)
                row--;
            else if(matrix[row][col] < target)
                col++;
        }
        return false;
    }
};