class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int n=nums.size();
        int low=0,high=n-1;
        while(low<=high)
        {
           int mid=low+(high-low)/2;
           if(nums[mid]==tar)
               return mid;
           if(tar>nums[mid])
               low=mid+1;
           else
               high=mid-1;
        }
        return -1;
    }
};