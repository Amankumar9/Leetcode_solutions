class Solution {
public:
    
    int findpar(int n, vector<int>&par)
    {
        if(n==par[n])
            return n;
        return findpar(par[n],par);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int>res;
        vector<int>par(n+1,0);
        for(int i=0;i<=n;i++)
        {
           par[i]=i; 
        }
        for(auto v:edges)
        {
            int n1=v[0],n2=v[1];
            int p1=findpar(n1,par);
            int p2=findpar(n2,par);
            if(p1==p2)
            { 
               res=v;
            }
            else
            {
                par[p1]=p2;
            }   
        }
        return res;
    }
};