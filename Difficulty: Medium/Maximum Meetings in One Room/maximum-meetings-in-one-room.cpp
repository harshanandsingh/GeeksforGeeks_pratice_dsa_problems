//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    vector<int> maxMeetings(int n, vector<int> &s, vector<int> &f) {
        
        
        vector<pair<int,pair<int,int>>>v;
        
        for(int i=0;i<n;i++){
            v.push_back({f[i],{s[i],i+1}});
        }
        sort(v.begin(),v.end());
        
        int end_time = v[0].first;
        vector<int>ans;
        ans.push_back(v[0].second.second);
        
        for(int i=1;i<n;i++){
            if(v[i].second.first > end_time){
                ans.push_back(v[i].second.second);
                end_time = v[i].first;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends