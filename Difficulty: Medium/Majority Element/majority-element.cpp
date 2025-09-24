class Solution {
  public:
    int majorityElement(vector<int>& nums) {
        
        int m_e = nums[0];
        int count = 0;
        int n = nums.size();

        int i=0;
        while(i<n){
            if(nums[i] == m_e) count++;
            else{
                count--;
                if(count == 0){
                    m_e = nums[i];
                    count++;
                }
            }
            i++;
        }
        
        // now i got the candidate to find the majority element
        count = 0;
        for(auto x:nums){
            if(x==m_e) count++;
        }
        if(count > nums.size()/2) return m_e;
        return -1;
        
    }
};