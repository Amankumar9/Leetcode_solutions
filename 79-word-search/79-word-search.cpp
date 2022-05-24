class Solution {
    bool dfs(vector<vector<char>>& board, int i,int j, int c, string word)
     {
         if(word.length()==c)
             return true;
         if(i<0 || i==board.size() || j<0 || j==board[0].size() || board[i][j]!=word[c])
             return false;
         char ch=board[i][j];
         board[i][j]='*';
         bool found=dfs(board, i+1 ,j ,c+1 , word) ||
                    dfs(board, i-1 ,j ,c+1 , word) ||
                    dfs(board, i ,j+1 ,c+1 , word) || 
                    dfs(board, i ,j-1 ,c+1 , word);
         board[i][j]=ch;
         return found;
     }
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
         for(int j=0;j<board[0].size();j++)
          if(board[i][j]==word[0] && dfs(board, i, j, 0, word)==true)
            return true;
        return false;    
    }
};