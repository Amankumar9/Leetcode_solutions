class Solution
{
    public:
    vector<string> ans;
    int len;
    void solve(string s, int l, int r)
    {
        if (l > len)
        {
            return;
        }
        if (s.length() == 2 * len && r == l)
        {
            //cout << s << endl;
            ans.push_back(s);
            return;
        }
        if (r > l)
        {
            return;
        }
        solve(s + '(', l + 1, r);
        solve(s + ')', l, r + 1);
    }

    vector<string> generateParenthesis(int n)
    {
        len = n;
        int l = 0, r = 0;
        string s = "";
        solve(s, l, r);
        return ans;
    }
};