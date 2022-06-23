class Solution {
public:
    int bagOfTokensScore(vector<int>& tok, int p) {
        int n=tok.size();
        sort(tok.begin(),tok.end());
        int st=0,end=n-1,res=0,cur=0;
        while(st<=end)
        {
            if(p>=tok[st])
            {
                p-=tok[st++];
                cur++;
            }
            else
            {
                if(cur>0)
                {
                 p+=tok[end--];
                 cur--;
                }
                else
                 return res;
            }
            res=max(res,cur);
        }
        return res;
    }
};