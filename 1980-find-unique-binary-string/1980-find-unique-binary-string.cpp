class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        set<string>st;
        string res;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        help(nums[0].size(),"",st,res);
        return res;
    }
    
    void help(int n, string curr, set<string>st, string &res)
    {
        if(curr.size()==n)
        {
            if(st.find(curr)==st.end())
                res=curr;
            return;
        }
        help(n,curr+'0',st,res);
        if(res=="")
        {
           help(n,curr+'1',st,res);
        }
    }
};