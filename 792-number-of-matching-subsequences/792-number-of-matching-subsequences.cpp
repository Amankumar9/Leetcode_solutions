class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int cnt=0,n=words.size();
        unordered_map<char,vector<int>>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]].push_back(i);
        }
        for(int i=0;i<n;i++)
        {
            string tmp=words[i];
            int currind=-1;
            for(int j=0;j<tmp.size();j++)
            {
                auto x=upper_bound(mp[tmp[j]].begin(),mp[tmp[j]].end(),currind);
                if(x==mp[tmp[j]].end())
                    break;
                else
                    currind=*x;
                if(j==tmp.size()-1)
                    cnt++;
            }
        }
        return cnt;
    }
    
};

