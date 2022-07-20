class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        long cur=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<n;i++)
        {
           cur=(cur+nums[i]+k)%k;
           if(mp.find(cur)==mp.end())
               mp[cur]=i;
           if(i-mp[cur]>1)
               return true;
        }
        return false;
    }
};