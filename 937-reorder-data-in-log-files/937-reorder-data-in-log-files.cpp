class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<pair<string,string>>st;
        vector<pair<string,string>>dig;
        for(auto a: logs)
        {
            int fl=0;
            string fs="";
            string ss="";
            for(int i=0;i<a.size();i++)
            {
                if(a[i]==' ' && fl==0)
                {
                    fl=1;
                    continue;
                }
                if(fl==0)
                    fs+=a[i];
                else
                    ss+=a[i];
            }
            if(ss[0]>='a' && ss[0]<='z')
            {
                st.push_back({ss,fs});
            }
            else
                dig.push_back({ss,fs});
        }
        
        sort(st.begin(),st.end());
        
        vector<string>res;
        
        for(auto i: st)
        {
            res.push_back(i.second + " " +i.first);
        }
        
        for(auto i: dig)
        {
            res.push_back(i.second + " " +i.first);
        }
        return res;
    }
};