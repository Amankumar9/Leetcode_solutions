class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        long lsum=0,rsum=0;
        vector<int>res(n,-1);
        vector<long long>lpre(n),rpre(n);
        for(int i=0;i<n;i++)
        {
            lsum+=nums[i];
            rsum+=nums[n-i-1];
            lpre[i]=lsum;
            rpre[n-i-1]=rsum; 
        }
        for(int i=k;i<n-k;i++)
        {
            long long total=0;
            if(i-k==0)
                total+=lpre[i];
            if(i-k>0)
                total+=lpre[i]-lpre[i-k-1];
            if(i+k==n-1)
                total+=rpre[i];
            if(i+k<n-1)
                total+=rpre[i]-rpre[i+k+1];
            total=total-nums[i];
            total=total/((2*k)+1);
            res[i]=total;
        }
        return res;
    }
};