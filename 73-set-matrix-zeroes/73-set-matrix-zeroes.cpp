class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
     int n=arr.size(),m=arr[0].size(),r=1,c=1;
        
        for(int i=0;i<n;i++)
        {
          if(arr[i][0]==0)
            r=0;
        }
        
        for(int j=0;j<m;j++)
        {
          if(arr[0][j]==0)
            c=0;
        }
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(arr[i][j]==0)
                {
                  arr[i][0]=0;
                  arr[0][j]=0;
                }
            }
        }
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(arr[i][0]==0 || arr[0][j]==0)
                {
                  arr[i][j]=0;
                }
            }
        }
        
        if(r==0)
        {
          for(int i=0;i<n;i++)
          {
            arr[i][0]=0;
          }
        }
        
        if(c==0)
        {
          for(int j=0;j<m;j++)
          {
            arr[0][j]=0;
          }
        }
    }
};