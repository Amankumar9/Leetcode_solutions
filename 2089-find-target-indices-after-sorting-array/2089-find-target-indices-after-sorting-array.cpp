class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int tar) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int st=0,end=n-1,res1=-1,res2=-1;
        vector<int>res;
        while(st<=end)
        {
            int mid=(st+end)/2;
            if(nums[mid]==tar)
            {
                res1=mid;
                end=mid-1;
            }
            else if(tar>nums[mid])
                st=mid+1;
            else
                end=mid-1;
        }
        st=0,end=n-1;
        while(st<=end)
        {
            int mid=(st+end)/2;
            if(nums[mid]==tar)
            {
                res2=mid;
                st=mid+1;
            }
            else if(tar>nums[mid])
                st=mid+1;
            else
                end=mid-1;
        }
        
        if(res1==-1 && res2==-1)
            return res;
        for(int i=res1;i<=res2;i++)
            res.push_back(i);
        return res;
    }
};