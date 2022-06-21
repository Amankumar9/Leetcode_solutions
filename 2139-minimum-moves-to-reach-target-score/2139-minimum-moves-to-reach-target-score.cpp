class Solution {
public:
    int minMoves(int tar, int mx) {
        int st=0;
        while(tar>=1 && mx)
        {
            if(tar%2!=0)
            {
                st++;
                tar--;
            }
            else
            {
                tar=tar/2;
                st++;
                mx--;
            }
        }
        st+=tar-1;
        return st;
    }
};