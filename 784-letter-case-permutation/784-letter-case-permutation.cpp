class Solution {
public:
    vector<string>letterCasePermutation(string s) {
        vector<string>res;
        help(s,0,res);
        return res;
    }
    
    void help(string s, int i, vector<string> &res)
    {
        if(i==s.size())
        {
            res.push_back(s);
            return;
        }
        help(s,i+1,res);
        if(isalpha(s[i]))
        {
            if(islower(s[i]))
            {
                s[i]=toupper(s[i]);
                help(s,i+1,res);
            }
            else
            {
                s[i]=tolower(s[i]);
                help(s,i+1,res);
            }
        }
    } 
};

