class StockSpanner {
public:
    stack<pair<int,int>>st;
    int ind=0;
    StockSpanner() {   
    }
    int next(int price) {
        ind++;
        while(!st.empty() && st.top().first<=price)
            st.pop();
        if(st.empty())
        {
            st.push({price,ind});
            return ind;
        }
        else
        {
            pair<int,int>tmp=st.top();
            st.push({price,ind});
            return ind-tmp.second;
        }
    }
};