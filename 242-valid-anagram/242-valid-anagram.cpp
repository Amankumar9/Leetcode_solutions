class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length(),m=t.length();
        if(n!=m)
          return false;
        int dat[26]={0};
        for(int i=0;i<n;i++)
        {
            dat[s[i]-'a']++;
            dat[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
          if(dat[i]!=0)
            return false;
        return true;
    }
};