class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector<pair<int,int>>cap;
        for(int i=0;i<val.size();i++){
            cap.push_back({val[i],wt[i]});
        }
        
        sort(cap.begin(),cap.end(),[](pair<int,int>&a , pair<int,int>&b){
            return (double) a.first/a.second > (double)b.first/b.second;
        });
        
        
        int i=0;
        double profit = 0;
        while(capacity>0 && i<cap.size()){
            if(cap[i].second <= capacity){
                profit +=cap[i].first;
                capacity -= cap[i].second;
            }
            else{
                profit += ((double)cap[i].first/cap[i].second) * capacity;
                capacity = 0;
            }
            i++;
        }
        return profit;
        
        
        
    }
};
