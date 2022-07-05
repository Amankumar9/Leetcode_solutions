class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>dp(n);
        dp[0]=1;
        int twp=0,thp=0,fip=0;
        for(int i=1;i<n;i++)
        {
            dp[i]=min({dp[twp]*2,dp[thp]*3,dp[fip]*5});
            if(dp[i]==dp[twp]*2)
                twp++;
            if(dp[i]==dp[thp]*3)
                thp++;
            if(dp[i]==dp[fip]*5)
                fip++;
        }
        return dp[n-1];
    }
};