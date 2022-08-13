class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n=nums.size(),res=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1] && (i-res)%2==0)
                res++;
        }
        return res+(n-res)%2;
    }
};