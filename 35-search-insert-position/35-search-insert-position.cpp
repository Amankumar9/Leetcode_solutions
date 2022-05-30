class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int end=n-1,st=0,mid=0;
        while(st<=end)
        {
            mid=(st+end)/2;
            if(target==nums[mid])
            {
               return mid;
            }
            else if(target>nums[mid])
                st=mid+1;
            else
                end=mid-1;
        }
        return st;
    }
};