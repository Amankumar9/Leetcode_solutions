class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        int n1=s1.size(),n2=s2.size();
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int cnt1=0,cnt2=0;
        for(int i=0;i<n1;i++)
        {
            if(s1[i]>s2[i])
                cnt1++;
            if(s2[i]>s1[i])
                cnt2++;
        }
        return (cnt1==0 || cnt2==0);
    }
};