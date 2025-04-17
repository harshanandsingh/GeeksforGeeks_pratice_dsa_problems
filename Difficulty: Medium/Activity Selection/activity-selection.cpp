//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        int n = start.size();
        
        vector<pair<int,int>>act;
        
        for(int i=0;i<n;i++){
            act.push_back({finish[i],start[i]});
        }
        
        sort(act.begin(),act.end());
        
        int fin = act[0].first;
        int c = 1;
        
        for(int i=1;i<n;i++){
            if(act[i].second > fin){
                fin= act[i].first;
                c++;
            }
        }
        
        return c;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> start;
        int num;
        while (ss >> num)
            start.push_back(num);
        getline(cin, input);
        ss.clear();
        vector<int> finish;
        ss.str(input);
        while (ss >> num)
            finish.push_back(num);

        Solution obj;
        cout << obj.activitySelection(start, finish) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends