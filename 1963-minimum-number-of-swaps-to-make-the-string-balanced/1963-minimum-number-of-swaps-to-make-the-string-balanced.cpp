class Solution {
public:
    int minSwaps(string s) {
        int n=s.size();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(!st.empty() && st.top()=='[' && s[i]==']')
                st.pop();
            else
                st.push(s[i]);
        }
        int res=st.size()/2;
        return (res+1)/2;
    }
};