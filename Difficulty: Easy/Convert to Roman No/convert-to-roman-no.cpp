class Solution {
  public:
    string convertToRoman(int num) {
        // code here
        vector<int>number = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string>romen_number = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    
        string res="";
        for(int i=0;i<number.size();i++){
            while(num>=number[i]){
                num-=number[i];
                res+=romen_number[i];
            }
        }
        return res;
    }
};