class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        sort(tokens.begin(),tokens.end());
        int st=0,end=n-1,res=0,cur=0;
        while(st<=end)
        {
            if(power>=tokens[st])
            {
                power-=tokens[st++];
                cur++;
            }
            else
            {
                if(cur>0)
                {
                 power+=tokens[end--];
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