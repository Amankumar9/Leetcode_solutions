class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int res=0;
        vector<int>curr;
        help(nums,curr,res,0);
        return res;
    }
    
    void help(vector<int>nums, vector<int>&cur, int &res, int ind)
    {
        if(ind==nums.size())
        {
            int cnt=0;
            for(auto it: cur)
                cnt=cnt^it;
            res+=cnt;
            return;
        }
        cur.push_back(nums[ind]);
        help(nums,cur,res,ind+1);
        cur.pop_back();
        help(nums,cur,res,ind+1);
        
    }
    
};