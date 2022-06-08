class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>ump;
        vector<int>res;
        for(int i=0;i<nums1.size();i++)
        {
            ump[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(ump[nums2[i]]>0){
                res.push_back(nums2[i]);
                ump[nums2[i]]=0;
            }
        }
        return res;
    }
};