class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
		mp.insert({0,-1});
		long rem=0;
		for(int i=0;i<nums.size();i++)
		{
			rem=(rem+nums[i]+k)%k;
			if(mp.find(rem)==mp.end())
				mp[rem]=i;
			if(i-mp[rem]>1)
                return true;
		}
		return false;
    }
};
