class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size(),cnt=0;
        if(n==1)
            return true;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]>nums[i])
            {
                 if((i<=1) || (nums[i-2]<=nums[i]))
                 {
                    nums[i-1]=nums[i];
                    cnt++;
                 }
                 else if(nums[i-2]>nums[i])
                 {
                    nums[i]=nums[i-1];
                    cnt++;
                 }
             }
             if(cnt>1)
                return false;
        }
        return cnt<=1;
    }
};