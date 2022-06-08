class Solution {
public:
    int maximumBags(vector<int>& cap, vector<int>& rocks, int add) {
        for(int i=0;i<cap.size();i++)
        {
            cap[i]=cap[i]-rocks[i];
        }
        sort(cap.begin(),cap.end());
        for(int i=0;i<cap.size();i++)
        {
            add-=cap[i];
            if(add<0)
                return i;
        }
        return cap.size();
    }
};