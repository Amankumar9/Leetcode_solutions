class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int tar) {
        vector<int>res;
        int n=nums.size();
        int st=0,end=n-1,ind1=-1;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(nums[mid]==tar)
            {
                ind1=mid;
                end=mid-1;
            }
            else if(nums[mid]>tar)
                end=mid-1;
            else
                st=mid+1;
        }
        st=0,end=n-1;
        int ind2=-1;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(nums[mid]==tar)
            {
                ind2=mid;
                st=mid+1;
            }
            else if(nums[mid]>tar)
                end=mid-1;
            else
                st=mid+1;
        }
        res.push_back(ind1);
        res.push_back(ind2);
        return res;
        
    }
};
