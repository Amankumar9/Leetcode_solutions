class Solution {
public:
    int rearrangeCharacters(string s, string target) {
    unordered_map<char,int>mp1,mp2;
    for(int i=0;i<s.length();i++)
    {
        mp1[s[i]]++;
    }
    for(int i=0;i<target.length();i++)
    {
        mp2[target[i]]++;
    }
    int res=INT_MAX;
    for(int i=0;i<target.length();i++)
    {
        res=min(res,mp1[target[i]]/mp2[target[i]]);
    }
    return res;
  }
};