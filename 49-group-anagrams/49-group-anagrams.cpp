class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>res;
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<n;i++)
        {
            string st=strs[i];
            sort(st.begin(),st.end());
            mp[st].push_back(strs[i]);
        }
        
        for(auto i:mp)
        {
            res.push_back(i.second);
        }
        return res;
    }
};