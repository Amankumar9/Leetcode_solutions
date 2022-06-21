class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
       vector<int>res;
       for(int i=0;i<ast.size();i++)
       {
        while(!res.empty() && res.back()>0 && res.back()<-ast[i])
            res.pop_back();
        if(res.empty() || ast[i]>0 ||  res.back()<0)
            res.push_back(ast[i]);
        else if(res.back()==-ast[i])
            res.pop_back();
       }
       return res;
    }
    
};
