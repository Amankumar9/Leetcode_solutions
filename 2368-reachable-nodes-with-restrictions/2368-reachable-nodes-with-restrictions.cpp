class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restr) {
        vector<bool>vis(n,false);
        for(int i=0;i<restr.size();i++)
        {
            vis[restr[i]]=true;
        }
        vector<vector<int>>graph(n);
        for(int i=0;i<edges.size();i++)
        {
            int ist=edges[i][0];
            int sec=edges[i][1];
            graph[ist].push_back(sec);
            graph[sec].push_back(ist);
        }
        int res=0;
        dfs(0,graph,vis,res);
        return res;
    }
    
    void dfs(int node, vector<vector<int>> &graph, vector<bool>&vis, int &res)
    {
        res++;
        vis[node]=true;
        for(auto itr: graph[node])
        {
            if(vis[itr]==false)
                dfs(itr,graph,vis,res);
        }
    }  
};