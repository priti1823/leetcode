class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int flag=0;
        int count=0;
        for(int i=0; i<nums.size();i++)
        {   if(flag==2)
            {  flag=1;
               count=0;
                
            }
            if(nums[i]==1)
             flag++;
            if(nums[i]==0 && flag==1)
             count++;
            if(flag==2)
            {
                if(count<k)
                return false;
            }
          
            
            
        }
       return true; 
    }
};