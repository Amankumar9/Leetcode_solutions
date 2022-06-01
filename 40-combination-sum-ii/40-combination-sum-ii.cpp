class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& cand, int tar)
    {
         vector<int>tmp;
         set<vector<int>>st;
         vector<vector<int>>res;
         sort(cand.begin(),cand.end());
         backtrc(cand,res,tmp,st,0,tar);
         for(auto a:st)
           res.push_back(a);
         return res;
    }
    
    void backtrc(vector<int>& cand, vector<vector<int>>& res, vector<int>& tmp, set<vector<int>>&st, int ind, int tar)
    {
        if(tar==0)
        {
            st.insert(tmp);
            return;
        }
        if(tar<0)
            return;
        for(int i=ind;i<cand.size();i++)
        {
            if(i!=ind && cand[i]==cand[i-1])
                continue;
            if(cand[i]>tar)
                break;
            tmp.push_back(cand[i]);
            backtrc(cand,res,tmp,st,i+1,tar-cand[i]);
            tmp.pop_back();
        }
    }
};
