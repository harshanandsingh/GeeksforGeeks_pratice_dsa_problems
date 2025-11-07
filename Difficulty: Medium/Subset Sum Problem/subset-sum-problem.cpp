class Solution {
  public:
  
   bool target(vector<int>& arr, int sum,int index,int sub_sum){
       
       if(sub_sum == sum) return true;
       if(sub_sum > sum || index>=arr.size()) return false;
       
       return target(arr,sum,index+1,sub_sum+arr[index]) || target(arr,sum,index+1,sub_sum);
   }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        return target(arr,sum,0,0);
        
    }
};