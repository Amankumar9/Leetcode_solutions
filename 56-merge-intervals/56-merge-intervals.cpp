class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>res;
        sort(intervals.begin(),intervals.end());
        int i=0;
        while(i<n)
        {
            int st=intervals[i][0];
            int end=intervals[i][1];
            i++;
            while(i<n && intervals[i][0]<=end)
            {
                end=max(end,intervals[i][1]);
                i++;
            }
            res.push_back({st,end});
        }
        return res;
    }
};