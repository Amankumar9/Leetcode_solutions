class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size(),cur=0;
        long long res=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                cur++;
                res+=cur;
            }
            else
                cur=0;
        }
        return res;
    }
};