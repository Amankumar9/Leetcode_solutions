class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
     int n=beans.size();
     sort(beans.begin(),beans.end());
     vector<long long>pre(n,0);
     long long cur=0,prev=0,res=LONG_MAX;
     for(int i=0;i<n;i++)
     {
         cur+=beans[i];
         pre[i]=cur;
     }
     long long total=0;
     for(long long i=0;i<n;i++)
     {
        if(i>0)
            prev=pre[i-1];
        long long diff=(beans[i]*(n-1-i));
        total=(pre[n-1]-pre[i])-diff;
        res=min(res,prev+total);
     }
     return res;  
    }
};