class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>, greater<int>>minhp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            minhp.push(nums[i]);
        }
        while(k--)
        {
            int topmost=minhp.top();
            topmost++;
            minhp.pop();
            minhp.push(topmost);
        }
        long res=1;
        while(minhp.size())
        {
            res=res*minhp.top();
            res=res%(1000000007);
            minhp.pop();
        }
        return res;
    }
};