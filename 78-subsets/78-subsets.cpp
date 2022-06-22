class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>curr;
        help(0,nums,curr,res);
        return res;
    }
    
    void help(int i, vector<int>&nums, vector<int>&curr, vector<vector<int>>& res)
    {
        if(i==nums.size())
        {
            res.push_back(curr);
            return;
        }
        else
        {
            // include ith ele
            curr.push_back(nums[i]);
            help(i+1,nums,curr,res);
            curr.pop_back();
            // exclude ith ele
            help(i+1,nums,curr,res);
        }
    }
    
};