class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,1);
        int helpvar=1;
        for(int i=1;i<n;i++)
        {
            helpvar=nums[i-1]*helpvar;
            res[i]=helpvar;
        }
        helpvar=1;
        for(int i=n-2;i>=0;i--){
            helpvar=helpvar*nums[i+1];
            res[i]*=helpvar;
        }
        return res;
    }
};