//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        
        int n=start.size();
        vector<pair<int,int>>m;
        for(int i=0;i<n;i++){
            m.push_back({end[i],start[i]});
        }
        sort(m.begin(),m.end());
        
        int count = 1; // always select the first meeting
        int lastEnd = m[0].first; // end time of first meeting
        
        for (int i = 1; i < n; i++) {
            if (m[i].second > lastEnd) { // start time > last end time
                count++;
                lastEnd = m[i].first; // update last selected meeting end time
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> start;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            start.push_back(num);
        }

        vector<int> end;
        getline(cin, input);
        stringstream s22(input);
        while (s22 >> num) {
            end.push_back(num);
        }

        Solution ob;
        int ans = ob.maxMeetings(start, end);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends