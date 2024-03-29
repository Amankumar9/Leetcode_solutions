class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        vector<vector<int>>res;
        if(n<3)
            return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            if(i!=0 && nums[i]==nums[i-1])
                continue;
            int j=i+1,k=n-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    res.push_back({nums[i],nums[j],nums[k]});
                while(j<k && nums[j]==nums[j+1])
                        j++;
                while(j<k && nums[k]==nums[k-1])
                        k--;
                j++;
                k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0)
                    j++;
                else
                    k--;
            } 
        }
        return res;
    }
};