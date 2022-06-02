class Solution {
public:
    char slowestKey(vector<int>& t, string k) {
        char res=k[0];
        int s=t[0],mx=t[0];
        for(int i=1;i<t.size();i++)
        {
            if(t[i]-t[i-1]==mx)
            {
                res=max(res,k[i]);
            }
            else if(t[i]-t[i-1]>mx)
            {
                mx=max(mx,t[i]-t[i-1]);
                res=k[i];
            }
        }
        return res;
    }
};