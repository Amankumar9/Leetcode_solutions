class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>mp;
        int n=num.size();
        for(int i=0;i<num.size();i++)
        {
            mp[num[i]-'0']++;
        }
        for(int i=0;i<num.size();i++)
          if(mp[i]!=num[i]-'0')
            return false;
        return true;
    }
};