class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prereq) {
        vector<int>indegree(n,0);
        vector<int>adj[n];
        for(int i=0;i<prereq.size();i++)
        {
            adj[prereq[i][1]].push_back(prereq[i][0]);
            indegree[prereq[i][0]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto it:adj[node])
            {
                indegree[it]--;
                if(indegree[it]==0)
                    q.push(it);
            } 
        }
        for(int i=0;i<n;i++)
        {
            if(indegree[i]!=0)
                return false;
        }
        return true;
    }
};