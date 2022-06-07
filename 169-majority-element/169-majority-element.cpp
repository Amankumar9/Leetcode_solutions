class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),mx=0,cnt=0;
        for(int i=0;i<n;i++)
        {
             if(nums[i]==mx)
                cnt++;
             else if(cnt==0)
                mx=nums[i];
             else
                cnt--;
        }
        return mx;
    }
};