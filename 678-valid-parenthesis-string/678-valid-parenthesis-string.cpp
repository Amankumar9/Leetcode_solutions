class Solution {
public:
    bool checkValidString(string s) {
        int op=0,cl=0,st=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                op++;
            else if(s[i]=='*')
                st++;
            else
            {
                cl++;
                if(op+st<cl)
                    return false;
            }
        }
        op=0,cl=0,st=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]==')')
                cl++;
            else if(s[i]=='*')
                st++;
            else
            {
                op++;
                if(cl+st<op)
                    return false;
            }
        }
        return true;
    }
};