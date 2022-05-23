class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& cand, int tar) {
         vector<vector<int>>res;
         vector<int>tmp;
         backtrc(cand,tmp,0,tar,res);
         return res;
    }
    
    void backtrc(vector<int>& cand, vector<int>& tmp, int ind, int tar, vector<vector<int>>& res)
    {
        if(tar==0)
        {
            res.push_back(tmp);
            return;
        }
        if(tar<0)
            return;
        for(int i=ind;i<cand.size();i++)
        {
            tmp.push_back(cand[i]);
            backtrc(cand,tmp,i,tar-cand[i],res);
            tmp.pop_back();
        }
    }
};