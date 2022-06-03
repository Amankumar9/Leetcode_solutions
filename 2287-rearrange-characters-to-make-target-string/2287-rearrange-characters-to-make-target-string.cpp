class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> vS(26,0);
        vector<int>vT(26,0);
        for(int i=0;i<s.length();i++)
            vS[s[i]-'a']++;
        for(int i=0;i<target.length();i++)
            vT[target[i]-'a']++;
        int ans=INT_MAX;
        for(int i=0;i<26;i++){
            if(vT[i]>0)
                ans=min(ans,vS[i]/vT[i]);
        }
        return ans;
  }
};