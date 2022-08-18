class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>ump;
        priority_queue<int>mxpq;
        for(int i=0;i<n;i++)
        {
            ump[arr[i]]++;
        }
        for(auto itr: ump)
        {
            mxpq.push(itr.second);
        }
        int cnt=0,sum=0;
        while(mxpq.size())
        {
            cnt++;
            sum+=mxpq.top();
            mxpq.pop();
            if(sum>=n/2)
                return cnt;
        }
        return cnt;
        
    }
};