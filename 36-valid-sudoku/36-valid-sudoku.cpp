class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& bod) {
        unordered_set<string>st;
        int n=bod.size(),m=bod[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(bod[i][j]!='.')
                {
                    int num=bod[i][j];
                    string R=to_string(num)+'r'+to_string(i);
                    string C=to_string(num)+'c'+to_string(j);
                    string B=to_string(num)+'b'+to_string(i/3)+'b'+to_string(j/3);
                    
                   if(st.find(R)!=st.end() ||
                       st.find(C)!=st.end()||
                       st.find(B)!=st.end())
                   return false;
                    
                    st.insert(R); 
                    st.insert(C);
                    st.insert(B);
                }
            }
        }
        return true;;
    }
};