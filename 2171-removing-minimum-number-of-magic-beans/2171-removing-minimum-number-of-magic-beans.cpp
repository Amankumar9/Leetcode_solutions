class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
     long long n=beans.size();
     sort(beans.begin(),beans.end());
     long long total=0,prev=0;
     for(int i=0;i<n;i++)
     {
         total+=beans[i];
     }
     long long res=total;
     long long unused=0;
     for(long long i=0;i<n;i++)
     {
        unused=total-(n-i)*beans[i];
        res=min(unused,res);
     }
     return res;  
    }
};