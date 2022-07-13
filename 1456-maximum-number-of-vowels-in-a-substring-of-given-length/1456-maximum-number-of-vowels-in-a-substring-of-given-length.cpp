class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int cnt=0,res=0,i=0,j=0;
        while(j<n)
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
            {
                cnt++;
                res=max(res,cnt);
            }
            j++;
            if(j>=k)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                    cnt--;
                i++;
            }
        }
        return res;
    }
};