class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0,cnt=0,prod=1,res=0;
        while(r<n && l<=r)
        {
            prod*=nums[r++];
            cnt++;
            while(l<r && prod>=k)
            {
                prod=prod/nums[l++];
                cnt--;
            }
            res+=cnt;  
        }
        return res;
    }
};