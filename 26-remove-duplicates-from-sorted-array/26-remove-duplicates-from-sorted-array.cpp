class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 1;
        int j=1,i=1;
        while(i<n)
        {
            if(nums[i]==nums[i-1])
                i++;
            else
                nums[j++]=nums[i++];
        }
        return j;
    }
};