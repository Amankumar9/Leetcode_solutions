class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n=matches.size();
        unordered_map<int,int>noloss,oneloss;
        for(int i=0;i<n;i++)
        {
            noloss[matches[i][1]]++;
            oneloss[matches[i][1]]++;
        }
        vector<vector<int>>res;
        vector<int>res1,res2;
        for(int i=0;i<n;i++)
        {
            if(noloss.find(matches[i][0])==noloss.end()){
                res1.push_back(matches[i][0]);
                noloss[matches[i][0]]++;
            }
            if(oneloss[matches[i][1]]==1){
                res2.push_back(matches[i][1]);
                oneloss[matches[i][1]]=0;
            }
        }
        sort(res1.begin(),res1.end());
        sort(res2.begin(),res2.end());
        res.push_back(res1);
        res.push_back(res2);
        return res;
    }
};