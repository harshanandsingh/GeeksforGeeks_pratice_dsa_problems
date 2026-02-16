// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        vector<int>p(26,0);
        vector<int>t(26,0);
        
        
        
       
        int n = txt.size(); // this is the string size 
        int m = pat.size(); // this is the window size 
        for(auto x:pat) p[x-'a']++; // make the anagram 
        int count = 0;
        
        // make the window 
        for(int i=0;i<m;i++) t[txt[i]-'a']++;
        
        if(t==p) count++;
        
        for(int i=m;i<n;i++){
            t[txt[i]-'a']++; // add new itom 
            t[txt[i-m]-'a']--; // remove the window element 
            
            if(t==p) count++;
            
        }
        return count;
        
    }
};