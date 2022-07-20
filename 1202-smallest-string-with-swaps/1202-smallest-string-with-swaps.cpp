class Solution {
public:
    vector<vector<int>>graph;
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) 
    {
        int n=s.size();
        graph.resize(n);
        vector<bool>vis(n,false);
        for(auto x: pairs)
        {
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        for(int i=0;i<n;i++)
        {
            vector<int>ind;
            vector<char>str;
            if(vis[i]==false)
            {
                dfs(graph,vis,i,ind,str,s);
            }
            sort(ind.begin(),ind.end());
            sort(str.begin(),str.end());
            for(int i=0;i<ind.size();i++)
            {
                s[ind[i]]=str[i];
            }
        } 
        return s;
    }
    
    void dfs(vector<vector<int>> &graph, vector<bool> &vis, int i, vector<int>& ind, vector<char>&str, string &s)
    {
        vis[i]=true;
        ind.push_back(i);
        str.push_back(s[i]);
        for(int u:graph[i])
        {
            if(vis[u]==false)
                dfs(graph,vis,u,ind,str,s);
        }
    }
};