class Solution {
public:
    int minSubArrayLen(int tar, vector<int>& nums) {
        int n=nums.size(),lft=0,res=INT_MAX,cursum=0,curcnt=0;
        for(int i=0;i<n;i++)
        {
            cursum+=nums[i];
            while(cursum>=tar)
            {
                res=min(res,i-lft+1);
                cursum-=nums[lft++];
            }
        }
        return res!=INT_MAX?res:0;
    }
};