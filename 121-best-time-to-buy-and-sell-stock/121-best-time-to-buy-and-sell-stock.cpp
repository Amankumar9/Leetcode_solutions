class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=INT_MAX,res=0,n=prices.size();
        for(int i=0;i<n;i++)
        {
            if(prices[i]<low)
                low=prices[i];
            else{
                res=max(res,prices[i]-low);
            }
        }
        return res;
    }
};