class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>mnpq;
        for(int i=0;i<nums.size();i++)
        {
            mnpq.push(nums[i]);
            if(mnpq.size()>k)
                mnpq.pop();
        }
        return mnpq.top();
    }
};