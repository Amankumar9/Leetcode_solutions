class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=0,high=0;
        for(int i=0;i<weights.size();i++)
        {
            low=max(weights[i],low);
            high+=weights[i];
        }
        while(low<high)
        {
           
            int mid=(low+high)/2;
            int curr=0,d=1;
            for(int i=0;i<weights.size();i++)
            {
                if(curr+weights[i]>mid)
                {
                    d+=1;
                    curr=0;
                }
                curr+=weights[i];
            }
            if(d>days)
                low=mid+1;
            else
                high=mid;
        }
        return low;
    }
};