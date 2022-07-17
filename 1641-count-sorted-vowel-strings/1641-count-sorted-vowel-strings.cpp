class Solution {
public:
    int countVowelStrings(int n) {
        if(n==1)
            return 5;
        int res=0;
        vector<vector<int>>dp(n,vector<int>(5,1));
        for(int i=1;i<n;i++)
        {
            int cur=0;
            for(int j=4;j>=0;j--)
            {
                cur+=dp[i-1][j];
                dp[i][j]=cur;
            }
        }
        for(int j=0;j<4;j++)
            res+=dp[n-1][j];
        return res+1;
    }
};