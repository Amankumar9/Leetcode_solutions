class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            res.push_back(nums[nums[i]]);
        }
        return res;
    }
};