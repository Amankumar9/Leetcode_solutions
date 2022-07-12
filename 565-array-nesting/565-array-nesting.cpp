class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int res=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {
                int k=nums[i];
                int curr=1;
                while(nums[k]>=0 && k!=i)
                {
                    curr++;
                    int tmp=nums[k];
                    nums[k]=-1*nums[k];
                    k=tmp;
                }
                res=max(curr,res);
            }
        }
        return res;
    }
};
