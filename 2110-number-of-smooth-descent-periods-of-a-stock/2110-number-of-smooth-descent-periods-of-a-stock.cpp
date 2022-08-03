class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n=prices.size();
        if(n==1)
            return 1;
        int prevdig=prices[0],curcnt=0;
        long long res=0;
        // for every digit
        res+=n;
        for(int i=1;i<n;i++)
        {
            if(prices[i]+1==prevdig)
            {
                curcnt++;
                res+=curcnt;
            }
            else
                curcnt=0;
            prevdig=prices[i];
        }
        return res;
    }
};