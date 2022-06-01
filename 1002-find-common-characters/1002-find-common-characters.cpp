class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>res;
        vector<int>v(26,INT_MAX);
        for(auto i: words)
        {
            vector<int>tmp(26,0); 
            for(auto j: i)
            {
                tmp[j-'a']++;
            }
            for(int x=0;x<26;x++)
            {
                v[x]=min(v[x],tmp[x]);
            }   
        }
        for(int x=0;x<26;x++)
        {
             while(v[x]--)
             {
                 res.push_back(string(1,x+'a'));
             }
        }
        return res;   
    }
};