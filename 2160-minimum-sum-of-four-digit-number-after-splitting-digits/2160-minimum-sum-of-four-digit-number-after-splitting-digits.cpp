class Solution {
public:
    int minimumSum(int nums) {
        string st=to_string(nums);
        sort(st.begin(),st.end());
        int n1=(st[0]-'0')*10+(st[2]-'0');
        int n2=(st[1]-'0')*10+(st[3]-'0');
        return n1+n2;
    }
};