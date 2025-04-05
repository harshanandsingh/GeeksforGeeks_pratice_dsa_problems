//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        cout << remAnagram(str1, str2);
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string s1, string s2) {
    // Your code goes here
    unordered_map<char,int>f;
    
    for(char x : s1){
        f[x]++;
    }
    for(char y: s2){
        f[y]--;
    }
    int count=0;
    for(auto& x:f){
        //cout<<x.first<<" "<<abs(x.second)<<endl;
        count+=abs(x.second);
    }
    return count;
    
}