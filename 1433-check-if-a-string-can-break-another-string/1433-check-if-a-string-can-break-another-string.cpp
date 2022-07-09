class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        int n1=s1.size(),n2=s2.size();
        int fr1[26]={0},fr2[26]={0},cnt1=0,cnt2=0;;
        for(int i=0;i<n1;i++)
            fr1[s1[i]-'a']++;
        for(int i=0;i<n2;i++)
            fr2[s2[i]-'a']++;
        bool fl1=true,fl2=true;
        for(int i=0;i<25;i++)
        {
            cnt1+=(fr1[i]-fr2[i]);
            cnt2+=(fr2[i]-fr1[i]);
            if(cnt1<0)
                fl1=false;
            if(cnt2<0)
                fl2=false;
        }
        return (fl1 || fl2); 
    }
};
