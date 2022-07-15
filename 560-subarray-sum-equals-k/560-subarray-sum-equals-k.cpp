class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),cs=0,res=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++)
        {
            cs+=nums[i];
            if(mp[cs-k]>0)
              res+=mp[cs-k];
            mp[cs]++;
        }
        return res;
    }
};