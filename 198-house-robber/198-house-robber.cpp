class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[0],nums[1]);
        int f=nums[0], s=max(nums[0],nums[1]), c=0;
        for(int i=2;i<n;i++)
        {
            c=max(f+nums[i],s);
            f=s;
            s=c;
        }
        return s;
    }
};
