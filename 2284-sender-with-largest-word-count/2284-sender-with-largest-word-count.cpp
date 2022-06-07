class Solution {
public:
    string largestWordCount(vector<string>& message, vector<string>& sender) {
        unordered_map<string,int>mp;
        for(int i=0;i<message.size();i++)
        {
            string st=message[i];
            int cnt=1;
            for(int j=0;j<st.length();j++)
            {
                if(st[j]==' ')
                    cnt++;
            }
            mp[sender[i]]+=cnt;
        }
        int mx=0;
        string res;
        for(auto it: mp)
        {
            if(it.second>mx)
            {
                mx=max(mx,it.second);
                res=it.first;
            }
            else if(it.second==mx)
            {
                res=max(res,it.first);
            }
        }
        return res;
    }
};

