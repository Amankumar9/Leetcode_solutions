class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        int n=nums.size();
        vector<int>res;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(tar-nums[i])!=mp.end())
            {
                res.push_back(mp[tar-nums[i]]);
                res.push_back(i);
                return res;
            }
            mp[nums[i]]=i;
        }
        return res;
    }
};