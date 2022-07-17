class Solution {
public:
    int countVowelStrings(int n) {
        if(n==1)
            return 5;
        int res=0;
        vector<int>dp(5,1);
        for(int i=1;i<=n;i++)
        {
            for(int j=3;j>=0;j--)
                dp[j]+=dp[j+1];
        }
        return dp[0];
    }
};