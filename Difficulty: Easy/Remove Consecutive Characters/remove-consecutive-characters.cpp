class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // code here.
        int n = s.size();
        // if(n==0) return s;
        
        int i=0,j=0;
        while(j<n){
            char p = s[j];
            
            while(j<n && s[j]==p) j++;
            
            s[i++]=p;
        }
        s.resize(i);
        return s;
    }
};