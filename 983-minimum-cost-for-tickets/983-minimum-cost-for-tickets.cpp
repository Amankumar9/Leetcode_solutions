class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        int maxdays=days[n-1];
        vector<int>dp(maxdays+1,INT_MAX);
        dp[0]=0;
        int j=0;
        for(int i=1;i<=maxdays;i++)
        {
            if(i==days[j])
            {
                int day1=dp[i-1]+costs[0];
                int day2=costs[1];
                if(i>=7)
                {
                    day2=dp[i-7]+costs[1];
                }
                int day3=costs[2];
                if(i>=30)
                {
                    day3=dp[i-30]+costs[2];
                }
                dp[i]=min({day1,day2,day3});
                j++;
            }
            else
            {
                dp[i]=dp[i-1];
            }
        }
        return dp[maxdays];
    }
};

