class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
      vector<int>st;
        for (int it : ast) {
            while (!st.empty() && st.back()>0 && st.back()<-it)
                st.pop_back();
            if (st.empty() || it>0 || st.back()<0)
                st.push_back(it);
            else if (it<0 && st.back()==-it)
                st.pop_back();
        }
        return st;  
    }
};
