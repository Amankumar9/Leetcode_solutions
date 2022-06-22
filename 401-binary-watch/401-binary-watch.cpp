class Solution {
public:
    vector<string> readBinaryWatch(int trn) {
        vector<string>res;
        for(int i=0;i<=11;i++)
        {
            for(int j=0;j<=59;j++)
            {
                int cnt=find(i)+find(j);
                if(cnt==trn)
                {
                    string tmp="";
                    tmp+=to_string(i);
                    tmp+=":";
                    if(j<=9)
                    {
                       tmp+="0"; 
                    }
                    tmp+=to_string(j);
                    res.push_back(tmp);
                }
            }
        }
        return res;
    }
    
    int find(int num)
    {
        int n=0;
        while(num)
        {
            if(num&1==1)
                n++;
            num=num/2;
        }
        return n;
    }
    
};