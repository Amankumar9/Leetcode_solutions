class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.length();
        if(n<2 || n<k)
            return s;
        stack<pair<char,int>>st;
        st.push({s[n-1],1});
        for(int i=n-2;i>=0;i--)
        {
            if(!st.empty() && s[i]==st.top().first)
            {
                st.top().second++;
                if(st.top().second==k)
                    st.pop();
            }
            else
                st.push({s[i],1});
        } 
        string res="";
        while(!st.empty())
        {
            int cnt=st.top().second;
            char curchar=st.top().first;
            while(cnt--)
            {
                res+=curchar;
            }
            st.pop();
        }
        return res;
    }
};