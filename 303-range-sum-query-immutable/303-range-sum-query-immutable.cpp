class NumArray {
public:
    vector<int>v;
    NumArray(vector<int>& nums)
    {
        int psum=0;
        for(int i=0;i<nums.size();i++)
        {
            psum+=nums[i];
            v.push_back(psum);
        }
    }
    
    int sumRange(int left, int right)
    {
        if(left!=0)
           return v[right]-v[left-1];
        else
           return v[right];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */