class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>mp1(26,0),mp2(26,0);
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            mp2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            res+=abs(mp1[i]-mp2[i]);
        }
        return res/2;
    }
};