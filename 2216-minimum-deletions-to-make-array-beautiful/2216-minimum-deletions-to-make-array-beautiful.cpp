class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n=nums.size(),res=0;
        stack<pair<int,int>>st;
        st.push({nums[0],0});
        for(int i=1;i<n;i++)
        {
            if(st.top().first==nums[i] && st.top().second%2==0)
                res++;
            else
                st.push({nums[i],st.top().second+1});
        }
        return st.size()%2==0?res:res+1;
    }
};