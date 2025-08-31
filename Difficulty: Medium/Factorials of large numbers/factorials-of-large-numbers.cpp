// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        vector<int>arr;
        
        arr.push_back(1);
        
        int size = 1;
        
        for(int i=2;i<=n;i++){
            
            int carry = 0;
            
            for(int j = 0;j<arr.size();j++){
                
                int val = arr[j]*i + carry;
                
                arr[j] = val%10;
                carry = val /10;
                
            }
            
            while(carry){
                
                arr.push_back(carry%10);
                carry = carry/10;
            }
            
        }
        reverse(arr.begin(),arr.end());
        return arr;
        
    }
};