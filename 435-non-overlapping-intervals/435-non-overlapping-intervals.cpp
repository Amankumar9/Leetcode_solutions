class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<int> last =intervals[0];
        int ans = 0;
        for(int i=1;i<intervals.size();i++){
            if(last[1]>intervals[i][0]){
                if(last[1]>intervals[i][1])
                    last=intervals[i];
                ans++;
            }
            else
                last=intervals[i]; 
        }
        return ans; 
    }
};