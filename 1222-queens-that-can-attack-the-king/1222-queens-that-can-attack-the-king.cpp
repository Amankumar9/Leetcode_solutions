class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>>res;
        
        int mp[8][8];
        memset(mp,0,sizeof(mp));
        for(int i=0;i<queens.size();i++)
        {
            int x=queens[i][0];
            int y=queens[i][1];
            mp[x][y]=1;
        }
        
        int x=king[0];
        int y=king[1];
        
        while(x<8)
        {
            if(mp[x][y]==1)
            {
                res.push_back({x,y});
                break;
            }
            x++;
        }
        x=king[0];
        while(x>=0)
        {
            if(mp[x][y]==1)
            {
                res.push_back({x,y});
                break;
            }
            x--;
        }
        x=king[0];
        while(y<8)
        {
            if(mp[x][y]==1)
            {
                res.push_back({x,y});
                break;
            }
            y++;
        }
        y=king[1];
        while(y>=0)
        {
            if(mp[x][y]==1)
            {
                res.push_back({x,y});
                break;
            }
            y--;
        }
        x=king[0]-1;
        y=king[1]-1;
        
        while(x>=0 && y>=0)
        {
            if(mp[x][y]==1)
            {
                res.push_back({x,y});
                break;
            }
            x--;
            y--;
        }
        x=king[0]+1;
        y=king[1]-1;
        
        while(x<8 && y>=0)
        {
            if(mp[x][y]==1)
            {
                res.push_back({x,y});
                break;
            }
            x++;
            y--;
        }
        x=king[0]+1;
        y=king[1]+1;
        
        while(x<8 && y<8)
        {
            if(mp[x][y]==1)
            {
                res.push_back({x,y});
                break;
            }
            x++;
            y++;
        }
        x=king[0]-1;
        y=king[1]+1;
        
        while(x>=0 && y<8)
        {
            if(mp[x][y]==1)
            {
                res.push_back({x,y});
                break;
            }
            x--;
            y++;
        }
        return res;
    }
};