class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int n=nums.size();
        int st=0,end=n-1,res=-1;
        while(st<=end)
        {
            int mid=(st+end)/2;
            if(nums[mid]==tar)
                return mid;
            if(nums[st]<=nums[mid])
            {
                if(tar>=nums[st] && tar<nums[mid])
                    end=mid-1;
                else
                    st=mid+1;
            }
            else
            {
                if(tar>nums[mid] && tar<=nums[end])
                    st=mid+1;
                else
                    end=mid-1;
            }
        }
        return res;
    }
};