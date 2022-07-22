class Solution {
public:
    int maximumGap(vector<int>& nums) {
        set<int> st;
        int n = nums.size();
        if(n<2){
            return 0;
        }
        for(int i = 0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        int ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            auto it = st.upper_bound(nums[i]);
            ans=max(ans,(*it-nums[i]));
        }
        return ans;
    }
};