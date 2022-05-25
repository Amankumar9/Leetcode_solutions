class Solution {
public:
    
    int dp[301];
    
    int help(int i, string s, set<string>&st)
    {
        if(i==s.size())
            return 1;
        if(dp[i]!=-1)
            return dp[i];
        string str;
        for(int j=i;j<s.size();j++)
        {
            str+=s[j];
            if(st.find(str)!=st.end())
                if(help(j+1,s,st))
                  return dp[i]=1;
        }
        return dp[i]=0;
    }
    
    bool wordBreak(string s, vector<string>& word) {
        set<string>st;
        memset(dp,-1,sizeof dp);
        for(int i=0;i<word.size();i++)
        {
            st.insert(word[i]);
        }
        return help(0,s,st);
    }
};