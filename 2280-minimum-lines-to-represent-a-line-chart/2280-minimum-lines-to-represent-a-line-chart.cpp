class Solution {
public:
    int minimumLines(vector<vector<int>>& sp) {
        sort(sp.begin(), sp.end());
        if (sp.size() <= 1) return 0;
        long double prev = (sp[1][1] - sp[0][1]) / (long double)(sp[1][0] - sp[0][0]);
        int cnt = 1;
        for (int i = 2; i < sp.size(); i++) {
            long double curr = (sp[i][1] - sp[i-1][1]) / (long double)(sp[i][0] - sp[i-1][0] );
            if (curr != prev) {
                cnt++;
                prev = curr;
            }
        }
        return cnt;
    }
};