class Solution {
public:
    int minSwaps(string s) {
        int n=s.size(),st=0,mx=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='[')
                st--;
            else
                st++;
            mx=max(st,mx);
        }
        return (mx+1)/2;
    }
};