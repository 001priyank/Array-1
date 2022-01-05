class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    
        vector<int> v1,res;
        int v2[nums.size()];
        
        int prevProd = 1;
        for(int i = 0;i<nums.size();i++) {
            prevProd *= nums[i];
            v1.push_back(prevProd);
        }
        
      
        prevProd = 1;
        for(int i = nums.size()-1;i>=0;i--) {
            prevProd *= nums[i];
            v2[i] = prevProd;
        }
        
         for(int i = 0;i<nums.size();i++) {
             
             int result = 1;
             if(i>0){
                 result *= v1[i-1];
             }
             if(i<nums.size()-1) {
              
                result *= v2[i+1];   
             }
             
            res.push_back(result);
        }
        
        return res;
    }
};


