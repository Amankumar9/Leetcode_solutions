class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
       /* stack <char>s1;
        stack <char>s2;
        
        int m=S.length(),n=T.length();
        
        for(int i=0;i<m;i++){
          if(S[i]>='a' && S[i]<='z')
           s1.push(S[i]);
          else if(S[i]=='#' && !s1.empty())
           s1.pop();   
        } 
        
        for(int i=0;i<n;i++){
          if(T[i]>='a' && T[i]<='z')
           s2.push(T[i]);
          else if(T[i]=='#' && !s2.empty())
           s2.pop();   
        } 
        
        while(!s1.empty() && !s2.empty()){
         if(s1.top()!=s2.top())
           return false;
         else
          {
           s1.pop();
           s2.pop();
          }  
        }
            
        if(!s1.empty() || !s2.empty())     
         return false;
          
        return true;
        
        */
        
        
        int i=S.length()-1;
        int j=T.length()-1;
        
        while(i>=0 || j>=0)
        {
            int c=0;
            while(i>=0 && (c>0 || S[i]=='#'))
            {
                if(S[i]=='#')
                    c++;
                else
                    c--;
                i--; 
            }
            c=0;
            while(j>=0 && (c>0 || T[j]=='#'))
            {
                if(T[j]=='#')
                    c++;
                else
                    c--;
                j--; 
            }
            if(i>=0 && j>=0)
            {
              if(S[i]!=T[j])
               return false;
              i--;
              j--;
            }
            else 
            {
             if (i>=0 || j>=0)
              return false; 
            }  
        }
        return true;
    }
};