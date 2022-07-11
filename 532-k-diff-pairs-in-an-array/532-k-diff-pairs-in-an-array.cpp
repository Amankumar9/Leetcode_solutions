class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size(),cnt=0;
        if(n==1)
            return 0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        if(k==0)
        {
            for(auto i : mp)
            {
                if(i.second>=2)
                  cnt++;
            }
        }
        else
        {
            for(auto i : mp)
            {
                if(mp.find(i.first-k)!=mp.end())
                  cnt++;  
            }
        }
        return cnt;
    }
};
