class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        if(n<3)
            return 0;
        int i=1,j,res=0,cur=0;
        while(i<n-1)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                cur=1;
                j=i;
                while(j>0 && arr[j]>arr[j-1])
                {
                    cur++;
                    j--;
                }
                j=i;
                while(j<n-1 && arr[j]>arr[j+1])
                {
                    cur++;
                    j++;
                }
                i=j;
            }
            res=max(res,cur);
            i++;
        }
        return res;
    }
};