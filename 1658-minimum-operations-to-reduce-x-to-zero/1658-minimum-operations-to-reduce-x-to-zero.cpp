class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size(),i=0,sum=0,res=INT_MIN,j=n-1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int tar=sum-x;
        if(tar<0)
            return -1;
        int st=0,cursum=0;
        for(int i=0;i<n;i++)
        {
            cursum+=nums[i];
            if(cursum==tar)
                res=max(res,i-st+1);
            while(cursum>tar)
            {
                cursum-=nums[st++];
            }
            if(cursum==tar)
                res=max(res,i-st+1);
        }
        return res==INT_MIN? -1 : n-res;
    }
};