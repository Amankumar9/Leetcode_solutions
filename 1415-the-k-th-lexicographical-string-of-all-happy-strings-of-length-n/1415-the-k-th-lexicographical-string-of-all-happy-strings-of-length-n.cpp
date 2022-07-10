class Solution {
public:
    string getHappyString(int n, int k) {
        vector<string>res;
        help(n,"",res);
        if(k>res.size())
            return "";
        return res[k-1];
    }
    
    void help(int n, string str, vector<string>&res)
    {
        if(str.size()==n)
        {
            res.push_back(str);
            return;
        }
        for(int i=0;i<3;i++)
        {
            if(str.back()!='a'+i)
            {
                string tmp=str;
                tmp.push_back('a'+i);
                help(n,tmp,res);
            }
        }
    } 
};

