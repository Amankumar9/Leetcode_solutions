class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),res=0;
        unordered_map<int,int>ump;
        for(int i=0;i<n;i++)
            ump[nums[i]]++;
        for(int i=0;i<n;i++)
        {
            if(ump.find(nums[i]-1)==ump.end())
            {
                int cnt=0,curnum=nums[i];
                while(ump.find(curnum)!=ump.end())
                {
                  cnt++;
                  curnum++;
                }
                res=max(res,cnt);
            }
        }
        return res;
    }
};