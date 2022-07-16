class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
       vector<int>v(20001,0);
       for(int i=0;i<nums.size();i++)
       {
           int number=nums[i]+v[nums[i]];
           v[nums[i]]=number;
       }
       if(v.size()==1)
           return v[0];
       if(v.size()==2)
           return max(v[0],v[1]);
       v[1]=max(v[0],v[1]);
       int res=0;
       for(int i=2;i<v.size();i++)
       {
           v[i]=max(v[i-2]+v[i],v[i-1]);
       }
       return v[v.size()-1];
    }
};